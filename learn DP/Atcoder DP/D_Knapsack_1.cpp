// recursive
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// const int N = 1e2 + 3, M = 1e5 + 3;
// int n, W, wt[N], v[N];
// ll dp[N][M];

// ll rec(int i, int w){
//     if(i > n) return 0;
//     if(dp[i][w] != -1) return dp[i][w]; 

//     ll ans = rec(i + 1, w);
//     if(w + wt[i] <= W) ans = max(ans, rec(i + 1, w + wt[i]) + v[i]);
    
//     return dp[i][w] = ans;
// }
// int32_t main()
// {   
//     cin >> n >> W;
//     for(int i = 1; i <= n; i++){
//         cin >> wt[i] >> v[i];
//     }

//     memset(dp, -1, sizeof dp);
//     cout << rec(1, 0);

//     return 0;
// }
// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    ll n, W; cin >> n >> W;
    ll w[n + 1], v[n + 1];
    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    
    ll dp[n + 2][W + 2]; memset(dp, 0, sizeof dp);

    for(int i = n; i >= 1; i--){
        for(int j = 0; j <= W; j++){
            ll ans = dp[i + 1][j];
            if(j + w[i] <= W){
                ans = max(ans, dp[i + 1][j + w[i]] + v[i]);
            }
            dp[i][j] = ans;
        }
    }

    cout << dp[1][0] ;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nw (1 + 2)
    // = O (nw)