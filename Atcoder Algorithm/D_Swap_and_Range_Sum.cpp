#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 2e5 + 5;
ll a[N];

struct ST{
    ll t[4 * N];
   
    ST(){
        memset(t, 0, sizeof t);
    }

    void build(ll n, ll b, ll e){
        if(b == e){
            t[n] = a[b];
            return;
        }
        ll l = n << 1, r = 1 | l, mid = (b + e) >> 1;
        build(l, b, mid);
        build(r, mid + 1, e);
        t[n] = t[l] + t[r];
    }
    void upd(ll n, ll b, ll e, ll i, ll x){
        if(i < b or e < i) return;
        if(b == e and b == i){
            t[n] = x;
            return;
        }
        ll l = n << 1, r = 1 | l, mid = (b + e) >> 1;
        upd(l, b, mid, i, x);
        upd(r, mid + 1, e, i, x);
        t[n] = t[l] + t[r];
    }
    ll query(ll n, ll b, ll e, ll i, ll j){
        if(j < b or e < i) return 0;
        if(i <= b and e <= j) return t[n];
        ll l = n << 1, r = 1 | l, mid = (b + e) >> 1;
        
        return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
    }
}t;

int main()
{   
    opt();
    
    ll n, q; cin >> n >> q;
    for(ll i = 1; i <= n; i++) cin >> a[i];

    t.build(1, 1, n);
    while(q--){
        ll op; cin >> op;
        if(op == 1){
            ll x; cin >> x;
            swap(a[x], a[x + 1]);
            t.upd(1, 1, n, x, a[x]);
            t.upd(1, 1, n, x + 1, a[x + 1]);
        }
        else{
            ll l, r; cin >> l >> r;
            cout << t.query(1, 1, n, l, r) << endl;
        }
    }
    
    return 0;
}