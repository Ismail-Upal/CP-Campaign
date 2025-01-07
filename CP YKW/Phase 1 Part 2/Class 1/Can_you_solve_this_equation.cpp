#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        double y; cin >> y;
        auto ok = [&](double x){
            return 8*x*x*x*x + 7*x*x*x + 2*x*x + 3*x + 6;
        };
        if(y < ok(0) or y > ok(100)){
            cout << "No solution!" << endl;
            continue;
        }
        double l = 0, r = 100, mid, ans;
        while(r-l > 1e-7){
            mid = l + (r - l) / 2;
            if(ok(mid) >= y){
                ans = mid;
                r = mid;
            }
            else l = mid;
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;
}