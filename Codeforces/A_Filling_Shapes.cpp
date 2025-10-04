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
    
    
        int n; cin >> n;
        if(n % 2) cout << 0 << endl;
        else{
            int dp[n + 2];
            dp[0] = 0, dp[1] = 0, dp[2] = 2;
            for(int i = 3; i <= n; i++){
                if(i % 2) dp[i] = dp[i - 1];
                else dp[i] = dp[i - 1] * 2;
            }
            cout << dp[n] ;
        }
    
    
    return 0;
}