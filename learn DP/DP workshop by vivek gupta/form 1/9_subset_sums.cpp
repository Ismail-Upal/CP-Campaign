#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, a[101], t;
int dp[105][10004];

int rec(int level, int sum){
    // pruning 
    if(sum > t) return 0;
    
    // base case
    if(level == n){
        if(sum == t) return 1;
        else return 0;
    }

    // cache check
    if(dp[level][sum] != -1) return dp[level][sum];

    // compute 
    int ans = rec(level + 1, sum);
    if(sum + a[level] <= t){
        ans += rec(level + 1, sum + a[level]);
    }

    // save and return
    return dp[level][sum] = ans;
}

int32_t main()
{   
    opt();
    
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    cin >> t;

    memset(dp, -1, sizeof dp);
    cout << rec(1, 0);
    
    return 0;
}