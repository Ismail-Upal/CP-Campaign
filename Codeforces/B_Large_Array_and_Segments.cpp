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
    
    tc{
        ll n, k, x; cin >> n >> k >> x;
        vector<ll> v(n + 1), pref(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        for(int i = 1; i <= n; i++) pref[i] = pref[i - 1] + v[i];
        ll sum = pref[n];
        ll res = 0;
        for(int i = 1; i <= k; i++){
            ll l = 1, r = n, ans = 0;
            while(l <= r){
                ll mid = l + (r - l) / 2;
                if(pref[n] - pref[mid - 1] >= x){
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            // cout << ans << endl;
            if(ans > 0){
                res = ans + (n * (k - i));
                break;
            }
            else{
                x -= sum;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}