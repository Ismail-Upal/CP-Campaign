// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 3;
// int n, a[N], b[N], c[N], dp[N][4];
// int rec(int i, int act){
//     if(i > n) return 0;
//     if(dp[i][act] != -1) return dp[i][act];

//     int ans = 0;
//     if(act == 1){
//         ans = rec(i + 1, 2) + a[i];
//         ans = max(ans, rec(i + 1, 3) + a[i]);
//     }
//     if(act == 2){
//         ans = rec(i + 1, 1) + b[i];
//         ans = max(ans, rec(i + 1, 3) + b[i]);
//     }
//     if(act == 3){
//         ans = rec(i + 1, 1) + c[i];
//         ans = max(ans, rec(i + 1, 2) + c[i]);
//     }

//     return dp[i][act] = ans;
// }

// int32_t main()
// {   
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         cin >> a[i] >> b[i] >> c[i];
//     }

//     memset(dp, -1, sizeof dp);
//     cout << max({rec(1, 1), rec(1, 2), rec(1, 3)});
    
//     return 0;
// }
// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    int a[n + 1], b[n + 1], c[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i];

    int dp[n + 1][4];
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= 3; j++){
            int ans = 0;
            if(i == n){
                if(j == 1) ans = max(b[i], c[i]);
                if(j == 2) ans = max(a[i], c[i]);
                if(j == 3) ans = max(a[i], b[i]);
            }
            else{
                if(j == 1) ans = max(dp[i + 1][2] + b[i], dp[i + 1][3] + c[i]);
                if(j == 2) ans = max(dp[i + 1][1] + a[i], dp[i + 1][3] + c[i]);
                if(j == 3) ans = max(dp[i + 1][1] + a[i], dp[i + 1][2] + b[i]);
            }
            dp[i][j] = ans;
        }
    }
    cout << max({dp[1][1], dp[1][2], dp[1][3]});

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = 3n (1 + 3 * 2)
    // = O (n)