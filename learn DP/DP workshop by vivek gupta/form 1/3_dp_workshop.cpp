#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, t[1001], s[1001], x, k;
int taken[1001];
int dp[101][101][101];

bool check(int level){
    int time_taken = 0, item_taken = 0;
    for(int i = 0; i < level; i++){
        if(taken[i]){
            time_taken += t[i];
            item_taken += 1;
        }
    }
    time_taken += t[level];
    item_taken ++;

    if(time_taken <= x and item_taken <= k) return 1;
    else return 0;
}
// Backtracking
int rec(int level){ // max skill i can make from [level... n -1]
    // level - current item in [0... n-1]

    // pruning

    // base case
    if(level == n) return 0; 

    // compute
    // loop over choices
    // choice 1 : don't take
    int ans = rec(level + 1);
    // choice 2 : take
    if(check(level)){
        // place the change
        taken[level] = 1;
        // move
        ans = max(ans, rec(level + 1) + s[level]);
        // revert
        taken[level] = 0;
    }

    // return
    return ans;
}

int32_t main()
{   
    opt();
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> t[i] >> s[i];
    cin >> x >> k;

    memset(dp, -1, sizeof dp);

    cout << rec(0);
    
    return 0;
}

int rec(int level, int time_taken, int item_taken){ // DP

    // pruning

    // base case
    if(level == n) return 0;

    // cache check
    if(dp[level][time_taken][item_taken] != -1) return dp[level][time_taken][item_taken];

    // compute / transition
    int ans = rec(level + 1, time_taken, item_taken);
    if(time_taken + t[level] <= x and item_taken + 1 <= k){
        ans = min(ans, rec(level + 1, time_taken + t[level], item_taken + 1) + s[level]);
    }

    // save and return
    return dp[level][time_taken][item_taken] = ans;
}
