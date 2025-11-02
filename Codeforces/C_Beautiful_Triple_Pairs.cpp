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
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        map<vector<ll>, ll> mp;
        map<vector<ll>, ll> mp1;

        ll ans = 0;
        for(ll i = 0; i < n; i++){
            if(i >= 2){
                ans += mp[{v[i - 2], v[i - 1], 0}] - mp1[{v[i - 2], v[i - 1], v[i]}];
                ans += mp[{v[i - 2], 0, v[i]}] - mp1[{v[i - 2], v[i - 1], v[i]}];
                ans += mp[{0, v[i - 1], v[i]}] - mp1[{v[i - 2], v[i - 1], v[i]}];

                mp[{v[i - 2], v[i - 1], 0}]++;
                mp[{v[i - 2], 0, v[i]}]++;
                mp[{0, v[i - 1], v[i]}]++;

                mp1[{v[i - 2], v[i - 1], v[i]}]++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}


