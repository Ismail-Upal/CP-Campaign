// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 4, mod = 1e9 + 7;
// int h, w, dp[N][N];
// char g[N][N];
// bool ok(int i, int j){
//     return (i <= h and j <= w and g[i][j] == '.');
// }
// int rec(int i, int j){
//     if(i == h and j == w) return 1;
//     if(dp[i][j] != -1) return dp[i][j];

//     int ans = 0;
//     if(ok(i + 1, j)){
//         ans += rec(i + 1, j) % mod;
//     }
//     if(ok(i, j + 1)){
//         ans += rec(i, j + 1) % mod;
//     }

//     return dp[i][j] = ans % mod;
// }

// int32_t main()
// {   
//     cin >> h >> w;
//     for(int i = 1; i <= h; i++){
//         for(int j = 1; j <= w; j++){
//             cin >> g[i][j];
//         }
//     }
//     memset(dp, -1, sizeof dp);
//     cout << rec(1, 1) % mod ;

//     return 0;
// }

// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{   
    int n, m; cin >> n >> m;
    char c[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> c[i][j];
    }

    auto ok = [&](int i, int j){
        return i <= n and j <= m;
    };

    int dp[n + 1][m + 1]; memset(dp, 0, sizeof dp);
    if(c[n][m] == '.') dp[n][m] = 1;

    for(int i = n; i >= 1; i--){
        for(int j = m; j >= 1; j--){
            if(c[i][j] == '#') continue;
            int ans = 0;
            if(ok(i + 1, j) and c[i + 1][j] == '.') ans += dp[i + 1][j] % mod;
            if(ok(i, j + 1) and c[i][j + 1] == '.') ans += dp[i][j + 1] % mod;
            ans %= mod;
            dp[i][j] += ans;
        }
    }

    cout << dp[1][1] ;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nm (1 + 2)
    // = O (nm)