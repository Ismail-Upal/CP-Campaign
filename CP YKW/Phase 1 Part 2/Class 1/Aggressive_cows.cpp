#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n, c; cin >> n >> c;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        auto ok = [&](ll mid){
            ll cur = v[0], cow = 1;
            for(int i = 1; i < n; i++){
                if(v[i] - cur >= mid){
                    cow++;
                    cur = v[i];
                }
            }
            return cow >= c;
        };
        ll l = 0, r = 1e9, ans, mid;
        while(l <= r){
            mid = l + (r - l) /2 ;
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