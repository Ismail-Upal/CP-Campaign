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
        ll n; cin >> n;
        vector<ll> v(n + 1);
        set<ll> se;
        ll mx = 0;
        for(ll i = 1; i <= n; i++){
            cin >> v[i]; se.insert(i);
        }

        vector<ll> ans(n + 1), pref(n + 1);
        
        for(ll i = 1; i <= n; i++){
            v[i] += pref[i - 1];
            if(v[i] < mx){
                ll nd = mx - v[i];
                ll lo = *se.lower_bound(nd);
                se.erase(lo);
                ans[lo] = i;
                pref[i] += lo;
                v[i] += lo;
            }
            pref[i] += pref[i - 1];

            mx = max(mx, v[i]);
        }

        for(auto i : se) ans[i] = 1;
        for(ll i = 1; i <= n; i++) cout << ans[i] << " " ;
        cout << endl;
    }
    
    return 0;
}