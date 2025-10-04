#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+ 3, mod = 1e9 + 7;
int n; 
char g[N][N];
int dp[N][N];
bool ok(int i, int j){
    return (i >= 1 and i <= n and j >= 1 and j <= n and g[i][j] == '.');
}
int32_t main()
{   
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> g[i][j];
    }
    
    if(g[n][n] == '.') dp[n][n] = 1;

    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(ok(i, j)){
                if(ok(i + 1, j)) dp[i][j] = (dp[i + 1][j] % mod + dp[i][j] % mod) % mod;
                if(ok(i, j + 1)) dp[i][j] = (dp[i][j + 1] % mod + dp[i][j] % mod) % mod;
            }
        }
    }

    cout << dp[1][1];

    return 0;
}