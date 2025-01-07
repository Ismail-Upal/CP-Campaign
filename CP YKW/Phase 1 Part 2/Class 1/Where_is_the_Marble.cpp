#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
// #define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int i = 1;
    int n, q; 
    while(cin >> n >> q){
        if(n==0 and q == 0) break;
        vector<int> v(n);
        cout << "CASE# " << i <<":" << endl; i++;
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        while(q--){
            int x; cin >> x;
            int l = 0, r = n-1, ans = -1, mid;
            while(l <= r){
                mid = l + (r - l) / 2;
                if(v[mid] == x){
                    ans = mid + 1;
                    r = mid - 1;
                }
                else if(v[mid] > x) r = mid - 1;
                else l = mid + 1;
            }
            if(ans != -1){
                cout << x << " found at " << ans << endl;
            }
            else cout << x << " not found" << endl;
        }
    }
    
    return 0;
}