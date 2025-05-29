#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    

        ll n, k, x; cin >> n >> k >> x;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        vector<ll> diff;
        for(ll i = 0; i < n - 1; i++){
            if(abs(v[i] - v[i + 1]) > x) diff.push_back(abs(v[i] - v[i + 1]));
        }
        ll res = diff.size() + 1;
        
        sort(diff.begin(), diff.end());

        // for(auto i : diff) cout << i << " ";

        for(ll d : diff){
            ll l = 0, r = k, ans = -1, mid;
            while(l <= r){
                mid = l + (r - l) / 2;
                if(((d + mid) / (mid + 1)) <= x){
                    ans = mid;
                    r = mid - 1;
                }
                else l = mid + 1;
            }

            if(ans != -1 and k >= ans){
                res = res - 2 + 1;
                k -= ans;
                
                // cout << ans << " " << res << endl;
            }
        }
        cout << res << endl;
    
    
    return 0;
}