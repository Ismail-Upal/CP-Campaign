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
        ll n, c; cin >> n >> c;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        auto ok = [&](ll w){
            ll area = 0;
            for(int i = 0; i < n; i++){
                ll a = w + w + v[i];
                if(a > c or a * a > c) return false;
                area += (a * a);
                if(area > c) return false;
            }
            return area <= c;
        };

        ll l = 0, r = 1e9, ans = -1, mid;
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