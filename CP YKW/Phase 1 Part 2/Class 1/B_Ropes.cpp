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
 
        int n, k; cin >> n >> k;
        vector<double>v(n);
        for(int i = 0 ; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        double l = 0, r = 1e7+8, mid , ans;

        auto ok = [&](double l){
            int piece = 0;
            for(int i=0; i<n; i++){
                piece += v[i]/l;
            }
            return piece >= k;
        };
        while(r-l >= 1e-7){
            mid = l + (r - l)/ 2;
            if(ok(mid)){
                ans = mid;
                l = mid;
            }
            else r = mid;
        }

        cout<<fixed << setprecision(10) << ans ;
    return 0;
}