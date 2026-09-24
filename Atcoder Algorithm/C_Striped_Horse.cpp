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
        ll n, w; cin >> n >> w;
        vector<ll> c(n +1);
        for(ll i = 1; i <= n; i++) cin >> c[i];

        map<ll, ll> mp;
        for(ll i = 1; i <= n; i++){
            mp[i % (2 * w)] += c[i];
        }

        // for(auto i : mp) cout << ia.first <<" " << i.second << endl;

        ll ans = 1e18, sum = 0;

        for(ll i = 0, j = 0; i < 4 * w; ){
            sum += mp[j % (2 * w)];
            if(j - i + 1 < w) j++;
            else if(j - i + 1 == w){
                // cout << i << " " << j << " " << sum << endl;
                ans = min(ans, sum);
                sum -= mp[i % (2 * w)];
                i++;
                j++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}