// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 3, mod = 1e9 + 7;
// int n, dp[N]; 

// int rec(int s){
//     if(s == n) return 1;
//     if(dp[s] != -1) return dp[s];

//     int ans = 0;
//     for(int i = 1; i <= 6; i++){
//         if(s + i <= n){
//             ans += rec(s + i) % mod;
//             ans %= mod;
//         }
//     }
//     return dp[s] = ans;
// }
// int32_t main()
// {   
//     cin >> n;
//     memset(dp, -1, sizeof dp);
//     cout << rec(0);
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int mod = 1e9 + 7;
    int n; cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] % mod + dp[i - j] % mod) % mod;
            }
        }
    }

    cout << dp[n] ;
    
    return 0;
}