// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 3, mod = 1e9 + 7;
// int n, x, c[N], dp[N];

// int rec(int s){
//     if(s == x) return 1;
//     if(dp[s] != -1) return dp[s];

//     int ans = 0;
//     for(int i = 1; i <= n; i++){
//         if(s + c[i] <= x){
//             ans += rec(s + c[i]) % mod;
//             ans %= mod;
//         }
//     }

//     return dp[s] = ans;
// }
// int32_t main()
// {   
//     cin >> n >> x;
//     for(int i = 1; i <= n; i++) cin >> c[i];

//     memset(dp, -1, sizeof dp);
//     cout << rec(0);
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int mod = 1e9 + 7;
    int n, x; cin >> n >> x;
    vector<int> c(n + 1), dp(x + 1, 0);

    for(int i = 1; i <= n; i++) cin >> c[i];

    dp[0] = 1;

    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= n; j++){
            if(i >= c[j]){
                dp[i] = (dp[i] + dp[i - c[j]]) % mod;
            }
        }
    }

    cout << dp[x];
    
    return 0;
}