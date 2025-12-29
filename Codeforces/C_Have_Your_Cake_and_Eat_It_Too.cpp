#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll pref(vector<ll> &pr, ll n, ll nd){
    for(ll i = 1; i <= n; i++){
        if(pr[i] >= nd) return i;
    }
    return 0;
}
ll suff(vector<ll> &sf, ll n, ll nd){
    for(int i = n; i >= 1; i--){
        if(sf[n] - sf[i - 1] >= nd) return i;
    }
    return 0;
}

bool func(ll l, vector<ll> &v, ll nd, ll r){
    if(l == 0 or r == 0 or r - l <= 1) return 0;
    return v[r - 1] - v[l] >= nd;
}

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> a(n + 1), b(n + 1), c(n + 1), pra(n + 1), prb(n + 1), prc(n + 1);
        ll sum = 0;
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            pra[i] = pra[i - 1] + a[i];
            sum += a[i];
        }
        for(ll i = 1; i <= n; i++){
            cin >> b[i];
            prb[i] = prb[i - 1] + b[i];
            
        }
        for(ll i = 1; i <= n; i++){
            cin >> c[i];
            prc[i] = prc[i - 1] + c[i];
           
        }

        ll nd = (sum + 3 - 1) / 3; 

        bool abc = func(pref(pra, n, nd), prb, nd, suff(prc, n, nd));
        bool acb = func(pref(pra, n, nd), prc, nd, suff(prb, n, nd));
        
        bool bac = func(pref(prb, n, nd), pra, nd, suff(prc, n, nd));
        bool bca = func(pref(prb, n, nd), prc, nd, suff(pra, n, nd));

        bool cab = func(pref(prc, n, nd), pra, nd, suff(prb, n, nd));
        bool cba = func(pref(prc, n, nd), prb, nd, suff(pra, n, nd));

        bool ans = abc | acb | bac | bca | cab | cba;
        if(!ans) cout << -1 << endl;
        else{
            int a, b, c, d, e, f;
            if(abc){
                ll l = pref(pra, n, nd);
                ll r = suff(prc, n, nd);
                a = 1, b = l, c = l + 1, d = r - 1, e = r, f = n;
             }
            else if(acb){
                ll l = pref(pra, n, nd);
                ll r = suff(prb, n, nd);
                a = 1, b = l, c = r, d = n, e = l + 1, f = r - 1;
            }
            else if(bac){
                ll l = pref(prb, n, nd);
                ll r = suff(prc, n, nd);
                a = l + 1, b = r - 1, c = 1, d = l, e = r, f = n;
            }
            else if(bca){
                ll l = pref(prb, n, nd);
                ll r = suff(pra, n, nd);
                a = r, b = n, c = 1, d = l, e = l + 1, f = r - 1;
            }
            else if(cab){
                ll l = pref(prc, n, nd);
                ll r = suff(prb, n, nd);
                a = l + 1, b = r - 1, c = r, d = n, e = 1, f = l;
            }
            else if(cba){
                ll l = pref(prc, n, nd);
                ll r = suff(pra, n, nd);
                a = r, b = n, c = l + 1, d = r - 1, e = 1, f = l;
            }
            cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
        }
    }
    
    return 0;
}