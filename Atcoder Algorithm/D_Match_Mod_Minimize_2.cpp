#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> b(n);
        multiset<ll> a;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x; x %= m;
            a.insert(x);
        }
        for(ll i = 0; i < n; i++){
            cin >> b[i];
            b[i] %= m;
        }
        sort(b.begin(), b.end());

        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ll nd = m - b[i];
            auto lo = a.lower_bound(nd);
            if(lo == a.end()){
                ans += (*a.begin() + b[i]) % m;
                a.erase(a.begin());
            }
            else{
                ans += (*lo + b[i]) % m;
                a.erase(lo);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}