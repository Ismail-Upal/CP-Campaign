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
    
    ll n; cin >> n;
    vector<ll> v(n + 1);
    map<pair<ll, ll>, ll> mp;

    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] % 7 == 0){
            mp[{7, v[i] / 7}]++;
        }
        if(v[i] % 3 == 0){
            mp[{3, v[i] / 3}]++;
        }
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        if(v[i] % 7 == 0){
            mp[{7, v[i] / 7}]--;
        }
        if(v[i] % 3 == 0){
            mp[{3, v[i] / 3}]--;
        }
        if(v[i] % 5 == 0){
            ans += mp[{7, v[i] / 5}] * mp[{3, v[i] / 5}];
        }
    }

    for(ll i = n; i >= 1; i--){
        if(v[i] % 7 == 0){
            mp[{7, v[i] / 7}]++;
        }
        if(v[i] % 3 == 0){
            mp[{3, v[i] / 3}]++;
        }
    }
    for(ll i = n; i >= 1; i--){
        if(v[i] % 7 == 0){
            mp[{7, v[i] / 7}]--;
        }
        if(v[i] % 3 == 0){
            mp[{3, v[i] / 3}]--;
        }
        if(v[i] % 5 == 0){
            ans += mp[{7, v[i] / 5}] * mp[{3, v[i] / 5}];
        }
    }

    cout << ans;
    
    return 0;
}