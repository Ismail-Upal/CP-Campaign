// recursive
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// const int N = 1e2 + 3, M = 1e5 + 3;
// int n, W, wt[N], v[N];
// ll dp[N][M];
// int mx_val, res;
// ll rec(int i, int val){
//     if(val == 0) return 0;
//     if(i > n) return 1e18;
//     if(dp[i][val] != -1) return dp[i][val];

//     ll ans = rec(i + 1, val);
//     if(val - v[i] >= 0) ans = min(ans, rec(i + 1, val - v[i]) + wt[i]);
    
//     return dp[i][val] = ans;
// }
// int32_t main()
// {   
//     cin >> n >> W;
//     for(int i = 1; i <= n; i++){
//         cin >> wt[i] >> v[i];
//         mx_val += v[i];
//     }

//     memset(dp, -1, sizeof dp);

//     for(int val = mx_val; val >= 0; val--){
//         ll ans = rec(1, val);
//         if(ans <= W){
//             cout << val << endl; 
//             break;
//         }
//     }


//     return 0;
// }

// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    ll n, W; cin >> n >> W;
    ll w[n + 1], v[n + 1], mx_val = 0;
    for(int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
        mx_val += v[i];
    }

    ll dp[n + 2][mx_val + 2];
    for(int i = 0; i <= n + 1; i++){
        for(int j = 0; j <= mx_val; j++){
            dp[i][j] = 1e16;
        }
    }
    dp[n + 1][0] = 0;
    

    for(int i = n; i >= 1; i--){
        for(int j = 0; j <= mx_val; j++){
            ll ans = dp[i + 1][j];
            if(j - v[i] >= 0){
                ans = min(ans, dp[i + 1][j - v[i]] + w[i]);
            }
            dp[i][j] = ans;
        }
    }

    ll ans = 0;
    for(ll j = mx_val; j >= 0; j--){
        if(dp[1][j] <= W){
            ans = j; break;
        }
    }

    cout << ans;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nV (1 + 2)
    // = O (nV)