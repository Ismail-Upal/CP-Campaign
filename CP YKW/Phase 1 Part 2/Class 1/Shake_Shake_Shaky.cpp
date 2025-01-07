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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        auto ok = [&](int m){
            ll man = 0;
            for(int i : v){
                man += i / m;
            }
            return man >= k;
        };
        int l = 1, r = 1e9, ans = 0, mid;
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