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
        ll n, k; cin >> n >> k;
        vector<ll> v(n + 1);
        for(ll i = 1; i <= n; i++) cin >> v[i];
        
        map<ll, ll> mp;
        for(ll i = 1; i <= n; i++){
            mp[v[i] % (2 * k)]++;
            mp[(v[i] % (2 * k)) + k]--;
        }

        for(ll i = 1; i < 4 * k; i++){
            mp[i] += mp[i - 1];
        }
        for(ll i = 2 * k; i < 4 * k; i++){
            mp[i % (2 * k)] += mp[i];
        }
        
        
        ll mx = *max_element(v.begin(), v.end());
        ll ans = -1;
        for(ll i = mx; i < mx + k; i++){
            if(mp[i % (2 * k)] == n){
                ans = i; break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}