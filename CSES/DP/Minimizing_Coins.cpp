// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 3;
// int n, x, c[N];
// int dp[N];

// int rec(int s){
//     if(s == x) return 0; 
//     if(dp[s] != -1) return dp[s];
//     int ans = 1e9;
//     for(int i = 1; i <= n; i++){
//         if(s + c[i] <= x){
//             ans = min(ans, rec(s + c[i]) + 1);
//         }
//     }

//     return dp[s] = ans;
// }

// int32_t main()
// {   
//     cin >> n >> x;
//     for(int i = 1; i <= n; i++) cin >> c[i];

//     memset(dp, -1, sizeof dp);
//     if(rec(0) == 1e9) cout << -1 ;
//     else cout << rec(0);
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int n, x; cin >> n >> x;
    vector<int> c(n + 1); 
    for(int i = 1; i <= n; i++) cin >> c[i];

    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;
    
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= n; j++){
            if(i >= c[j]){
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }

    if(dp[x] == 1e9) cout << -1;
    else cout << dp[x];
    
    return 0;
}