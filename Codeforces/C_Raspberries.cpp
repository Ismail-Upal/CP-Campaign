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
        int ans = INT_MAX;
        map<int, int>mp;
        int even = 0;
        while(n--){
            int x; cin >> x;
            if(!(x & 1))even ++;
            int rem = x % k;
            if(rem == 0) ans = 0;
            else{
                
                ans = min(k - rem, ans);
            }
        }
        if(k == 4){
            if(even >= 2) ans = 0;
            else if(even == 1) ans = min(ans, 1);
            else ans = min(ans, 2);
        }
        cout << ans << endl;
    }
    
    return 0;
}