// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 3e3 + 3;
// int n;
// double ans = 0, dp[N][N], p[N];

// double rec(int i, int h){
//     if(i > n){
//         if(2 * h > n) return 1.0;
//         else return 0.0;
//     }
//     if(dp[i][h] != -1.0) return dp[i][h];

//     double ans = rec(i + 1, h + 1) * p[i];
//     ans += rec(i + 1, h) * (1 - p[i]);

//     return dp[i][h] = ans;
// }

// int main()
// {   
//     cin >> n;
//     for(int i = 1; i <= n; i++) cin >> p[i];
//     fill(&dp[0][0], &dp[0][0] + N * N, -1.0);
//     cout << fixed << setprecision(10) << rec(1, 0);

//     return 0;
// }

// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e3 + 3;
int n; 
double dp[N][N], p[N];
int main()
{   
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 0; i <= n; i++){
        if(2 * i > n) dp[n + 1][i] = 1.0;
        else dp[n + 1][i] = 0.0;
    } 

    for(int i = n; i >= 1; i--){
        for(int j = 0; j <= i; j++){
            double ans = dp[i + 1][j] * (1 - p[i]);
            ans += dp[i + 1][j + 1] * p[i];
            dp[i][j] = ans;
        }
    }

    cout << fixed << setprecision(10) << dp[1][0] ;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nm (1 + 2)
    // = O (nm)