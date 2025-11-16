#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, m; cin >> n >> m;
        multiset<ll> a;
        vector<pair<ll, ll>> bc(m);
        for(int i = 0; i < n; i++){
            ll x; cin >> x; a.insert(x);
        }
        for(int i = 0; i < m; i++) cin >> bc[i].first;
        for(int i = 0; i < m; i++) cin >> bc[i].second ;

        vector<ll> mp(m + 3, 0);
        sort(bc.begin(), bc.end());

        ll ans = 0;
        // for(auto i : cb) cout << i.first << i.second << endl;
        
        for(ll i = 0; i < m; i++){
            if(mp[i] == 1 or bc[i].second == 0) continue;

            auto it = a.lower_bound(bc[i].first);
            if(it == a.end()) continue;
            ll mx = max(*it, bc[i].second);
            a.erase(it);
            a.insert(mx);
            ans++; mp[i] = 1;
        }
       
        for(ll i = 0; i < m; i++){
            if(mp[i] == 1 or bc[i].second > 0) continue;
            
            auto it = a.lower_bound(bc[i].first);
            if(it == a.end()) continue;
            a.erase(it);
            ans++;
            mp[i] = 1;
        }

        cout << ans << endl;
    }   
    
    return 0;
}