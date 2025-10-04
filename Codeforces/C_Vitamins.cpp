#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
const int INF = 1e9;

int main()
{   
    opt();
    
    int n; cin >> n;
    vector<pair<int,int>> v(n+1);
    for(int i = 1; i <= n; i++){
        int x; string s; cin >> x >> s;
        int mask = 0;
        for(char j : s){
            if(j == 'A') mask |= (1 << 0);
            if(j == 'B') mask |= (1 << 1);
            if(j == 'C') mask |= (1 << 2);
        }
        v[i] = {x, mask};
    }

    vector<vector<int>> dp(n+1, vector<int>(8, INF));
    dp[0][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int mask = 0; mask < 8; mask++){
            // skip
            dp[i][mask] = min(dp[i][mask], dp[i-1][mask]);

            // take
            int newMask = mask | v[i].second;
            dp[i][newMask] = min(dp[i][newMask], dp[i-1][mask] + v[i].first);
        }
    }

    int ans = dp[n][7];
    if(ans >= INF) ans = -1;
    cout << ans << "\n";
    
    return 0;
}
