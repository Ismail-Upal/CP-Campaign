#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    ll n, W; cin >> n >> W;
    vector<ll> w(n + 1), v(n + 1);
    ll tot = 0;
    for(int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
        tot += v[i];
    }

    const ll INF = 1e18;
    vector<vector<ll>> dp(n + 2, vector<ll>(tot + 1, INF));
    dp[n + 1][0] = 0;

    for(int i = n; i >= 1; i--){
        for(int j = 0; j <= tot; j++){
            ll ans = dp[i + 1][j];
            if(j - v[i] >= 0){
                ans = min(ans, dp[i + 1][j - v[i]] + w[i]);
            }
            dp[i][j] = ans;
        }
    }

    ll ans = 0;
    for(int i = tot; i >= 0; i--){
        if(dp[1][i] <= W){
            ans = i; break;
        }
    }
    cout << ans;
    
    return 0;
}