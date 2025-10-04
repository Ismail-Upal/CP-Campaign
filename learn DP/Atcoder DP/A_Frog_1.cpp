// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 3;
// int n, a[N], dp[N];
// int rec(int i){
//     if(i == n) return 0;
//     if(dp[i] != -1) return dp[i];

//     int ans = rec(i + 1) + abs(a[i] - a[i + 1]);
//     if(i + 2 <= n) ans = min(ans, rec(i + 2) + abs(a[i] - a[i + 2]));

//     return dp[i] = ans;
// }
// int main()
// {   
//     cin >> n;
//     for(int i = 1; i <= n; i++) cin >> a[i];
//     memset(dp, -1, sizeof dp);
//     cout << rec(1) ;

//     return 0;
// }

// iterative----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {   
//     int n; cin >> n;
//     int a[n + 1];
//     for(int i = 1; i <= n; i++) cin >> a[i];

//     int dp[n + 1];
//     for(int i = n; i >= 1; i--){
//         int ans;
//         if(i == n) ans = 0;
//         else{
//             ans = dp[i + 1] + abs(a[i] - a[i + 1]);
//             if(i + 2 <= n) ans = min(ans, dp[i + 2] + abs(a[i] - a[i + 2]));
//         }
//         dp[i] = ans;
//     }

//     cout << dp[1] ;
    
//     return 0;
// }

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = n (1 + 2)
    // = O (n)