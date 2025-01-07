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
 
 
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int q; cin >> q;
        while(q--){
            int x; cin >> x;
            int l = 0, r = n - 1, mid, ans = -1;
            // while(l <= r){
            //     mid = l + (r - l) / 2;
            //     if(v[mid] <= x){
            //         ans = mid;
            //         l = mid + 1;
            //     }
            //     else r = mid - 1;
            // }
            ans = (upper_bound(v.begin(), v.end(), x) - v.begin()) - 1;
            cout << ans + 1<< endl;
        }
    
    
    return 0;
}