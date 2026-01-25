// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;

// vector<int> dp(N, -1);
// int climb_stairs(int n){
//     if(dp[n] != -1) return dp[n];

//     if(n <= 2) return n;

//     int ans = climb_stairs(n - 1) + climb_stairs(n - 2);

//     return dp[n] = ans;
// }

// int main()
// {   
//     int n; cin >> n;

//     cout << climb_stairs(n);
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    int dp[n + 1];

    dp[1] = 1, dp[2] = 2;

    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] ;
    
    return 0;
}

