#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3, mod = 1e9 + 7;
int n, x, c[N], dp[103][N];

int rec(int i, int s){
    if(s == 0) return 1;
    if(i > n) return 0;

    if(dp[i][s] != -1) return dp[i][s];

    int ans = rec(i + 1, s) % mod;
    if(s - c[i] >= 0) ans += rec(i, s - c[i]) % mod;

    return dp[i][s] = ans % mod;
}
int32_t main()
{   
    cin >> n >> x;
    for(int i = 1; i <= n; i++) cin >> c[i];
    
    memset(dp, -1, sizeof dp);
    cout << rec(1, x);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int mod = 1e9 + 7;
// int32_t main()
// {   
//     int n, x; cin >> n >> x;
//     vector<int> c(n + 1);
//     for(int i = 1; i <= n; i++) cin >> c[i];

//     int dp[n + 1][x + 1];

//     for(int i = 1; i <= n; i++){
//         for(int s = 0; s <= x; s++){
//             if(s == 0) dp[i][s] = 1;
//             else{
//                 int op1 = (c[i] > s) ? 0 : dp[i][s - c[i]];
//                 int op2 = (i == 1) ? 0 : dp[i - 1][s];
//                 dp[i][s] = (op1 + op2) % mod;
//             }
//         }
//     }

//     cout << dp[n][x];

//     return 0;
// }