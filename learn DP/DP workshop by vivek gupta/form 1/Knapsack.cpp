#include<bits/stdc++.h>
using namespace std;

int n, W, w[25], v[25], dp[25][100];

int rec(int i, int wt){
    if(i >= n) return 0;
    if(dp[i][wt] != -1) return dp[i][wt];

    int ans = rec(i + 1, wt);
    if(wt + w[i] <= W) ans = max(ans, rec(i + 1, wt + w[i]) + v[i]);

    return dp[i][wt] = ans;
}

int32_t main()
{   

    cin >> n >> W;
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];

    memset(dp, -1, sizeof dp);
    cout << "maximum value : " << rec(0, 0) << endl;
    
    return 0;
}