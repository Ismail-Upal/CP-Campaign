#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        vector<int> dp(n + 5, 0);
        
        for(int i = n; i >= 1; i--){
            int ans = dp[i + 1] + 1;
            if(i + v[i] <= n){
                ans = min(ans, dp[i + v[i] + 1]);
            }
            dp[i] = ans;
        }

        cout << dp[1] << endl;
    }
    
    return 0;
}