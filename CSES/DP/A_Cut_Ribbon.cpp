#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, a, b, c; cin >> n >> a >> b >> c;
    int dp[n + 1];
    fill(dp, dp + n + 1, -1);
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        int x = -1, y = -1, z = -1;
        if(i >= a and dp[i - a] != -1) x = dp[i - a];
        if(i >= b and dp[i - b] != -1) y = dp[i - b];
        if(i >= c and dp[i - c] != -1) z = dp[i - c];

        int mx = max({x, y, z});
        if(mx != -1) dp[i] =  mx + 1;

    }
    cout << dp[n];

    return 0;
}