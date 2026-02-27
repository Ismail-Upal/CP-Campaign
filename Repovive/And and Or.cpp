#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n), mp[50];

        ll mx = 0;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            for(ll k = 31; k >= 0; k--){
                if((v[i] & (1 << k))){
                    mx = max(mx, k); break;
                }
            }
        }
        
        for(ll i = 0; i < n; i++){
            for(ll k = mx; k >= 0; k--){
                if((v[i]) & (1 << k)) mp[k].push_back(1);
                else mp[k].push_back(0);
            }
        }

        for(ll i = 0; i <= mx; i++) sort(mp[i].begin(), mp[i].end());

        vector<ll> ans;

        for(ll i = 0; i < n; i++){
            ll x = 0;
            for(ll k = mx; k >= 0; k--){
                if(mp[k][i]) x |= 1 << k;
            }
            ans.push_back(x);
        }

        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}