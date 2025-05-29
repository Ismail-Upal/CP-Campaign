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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        auto ok = [&](ll h){
            ll sum = 0;
            for(int i = 0; i < n; i++){
                if(h >= v[i]) sum += h - v[i];
            }
            return sum <= k;
        };

        ll l = 1, r = 1e10, mid, ans = -1;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}