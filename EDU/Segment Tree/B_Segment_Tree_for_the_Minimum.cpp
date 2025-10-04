#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 4;
int a[N];
struct ST{
    int t[4 * N];
    ST(){memset(t, 0, sizeof t);}

    void build(int n, int b, int e){
        if(b == e){
            t[n] = a[b];
            return;
        }

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;
        
        build(l, b, mid); build(r, mid + 1, e);
        t[n] = min(t[l], t[r]);
    }
    void upd(int n, int b, int e, int i, int x){
        if(i < b or e < i) return;
        if(b == e and b == i){
            t[n] = x;
            return;
        }
        int l = n << 1, r = l | 1, mid = (b + e) >> 1;
        upd(l, b, mid, i, x); upd(r, mid + 1, e, i, x);
        t[n] = min(t[l], t[r]);
    }   
    int query(int n, int b, int e, int i, int j){
        if(j < b or e < i) return 1e9;
        if(i <= b and e <= j) return t[n];
        int l = n << 1, r = l | 1, mid = (b + e) >> 1;
        return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
    }
}t;

int32_t main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    t.build(1, 1, n);
    while(m--){
        int op; cin >> op;
        if(op == 1){
            int i, v; cin >> i >> v; i++;
            t.upd(1, 1, n, i, v);
        }
        else{
            int l, r; cin >> l >> r; l++;
            cout << t.query(1, 1, n, l, r) << endl;
        }
    }
    
    return 0;
}