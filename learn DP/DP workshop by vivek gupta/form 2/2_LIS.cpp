#include<bits/stdc++.h>
using namespace std;
int n, a[100001], dp[100001];

int rec(int level){
    // best LIS ending at level
    // pruning
    if(level < 0) return 0;
    
    // base case

    // cache check
    if(dp[level] != -1) return dp[level];

    // compute
    int ans = 1;
    for(int prev_taken = 0; prev_taken < level; prev_taken++){
        if(a[prev_taken] < a[level]){
            ans = max(ans, rec(prev_taken) + 1);
        }
    }

    // save and return
    return dp[level] = ans;
}

int32_t main()
{   
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    memset(dp, -1, sizeof dp);

    int mx = 0;
    for(int i = 0; i < n; i++) mx = max(mx, rec(i));

    cout << mx ;
    
    return 0;
}