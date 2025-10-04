// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 3;
// int n, k, h[N], dp[N];
// int rec(int i){
//     if(i > n) return 1e9;
//     if(i == n) return 0;
//     if(dp[i] != -1) return dp[i];

//     int ans = 1e9;
//     for(int j = 1; j <= k; j++){
//         if(i + j <= n) ans = min(ans, rec(i + j) + abs(h[i] - h[i + j]));
//     }

//     return dp[i] = ans;
// }
// int32_t main()
// {   
//     cin >> n >> k;
//     for(int i = 1; i <= n; i++) cin >> h[i];

//     memset(dp, -1, sizeof dp);

//     cout << rec(1) ;
    
//     return 0;
// }
// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, k; cin >> n >> k;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];

    int dp[n + 1];
    for(int i = n; i >= 1; i--){
        int ans = 1e9;
        if(i == n) ans = 0;
        else{
            for(int j = 1; j <= k; j++){
                if(i + j <= n) ans = min(ans, dp[i + j] + abs(a[i] - a[i + j]));
            }
        }
        dp[i] = ans;
    }
    cout << dp[1] ;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = n (1 + k)
    // = O (nk)