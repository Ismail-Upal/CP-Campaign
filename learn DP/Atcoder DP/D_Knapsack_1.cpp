#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    ll n, W; cin >> n >> W;
    vector<ll> w(n + 1), v(n + 1);
    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];

    vector<vector<ll>> dp(n + 1, vector<ll> (W + 1));

    for(int i = n; i >= 1; i--){
        for(int wt = 0; wt <= W; wt++){
            ll ans = 0;
            if(i == n){
                ans = dp[i][wt];
                if(wt + w[i] <= W) ans = max(ans, dp[i][wt + w[i]] + v[i]);
            }
            else{
                ans = dp[i + 1][wt];
                if(wt + w[i] <= W) ans = max(ans, dp[i + 1][wt + w[i]] + v[i]);
            }
            dp[i][wt] = ans;
        }
    }

    cout << dp[1][0] ;
    
    return 0;
}