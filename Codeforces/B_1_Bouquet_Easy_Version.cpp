#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll n, m; cin >> n >> m;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        auto ok = [&](ll mx){
            ll sum = 0, ans = 0;
            for(int r = 0, l = 0; r < n; r++){
                sum += v[r];
                while(sum > m or v[r] - v[l] > 1 and l < n){
                    sum -= v[l];
                    l++;
                }
                ans = max(ans, sum);
            }
            return ans >= mx;
        };
        ll l = 0, r = 1e18, mid, ans = 0;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                l = mid + 1;
                ans = mid;
            }
            else r = mid - 1;
        }
        if(ans > m) ans = m;
        cout << ans << endl;
    }
    
    return 0;
}