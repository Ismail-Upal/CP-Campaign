#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int n, m, dp[10001];

int rec(int level){ // ret - number of ways to N if we are at stairs 
    // level - current stair i am at 

    // pruning 
    if(level > n) return 0;

    // base case.
    if(level == n) return 1;

    if(dp[level] != -1) return dp[level];

    int ans = 0;

    // loop over choices
    for(int step = 1; step <= m; step++){
        // check - is a valid choice
        if(level + step <= n){
            // move
            int ways = rec(level + step);
            ans += ways;
        }
    }

    return dp[level] = ans; // for this level
}

int32_t main()
{   
    opt();
    
    memset(dp, -1, sizeof dp);

    cin >> n >> m;
    cout << rec(1) << endl;

    return 0;
}



// int rec(int level){
    
//     for(all choices){
//         if(check(valid choice)){
//             move(choice)
//         } 
//     }

// }