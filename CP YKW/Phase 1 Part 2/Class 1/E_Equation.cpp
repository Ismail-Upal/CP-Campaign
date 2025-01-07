#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    double c; cin >> c;
    auto ok = [&](double x){
        return (x*x + sqrt(x)) >= c;
    };
    double l = 0, r = 1e10, ans , mid;
    while(r - l > 1e-7){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid;
        }
        else l = mid;
    }
    cout << fixed << setprecision(20) << ans;
    return 0;
}