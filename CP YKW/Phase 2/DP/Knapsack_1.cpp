#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 104, M = 1e5 + 3;
ll n, W, w[N], v[N];
ll dp[N][M];
ll f(int i, int wt){
    if(i > n) return 0;
    if(dp[i][wt] != -1) return dp[i][wt];
    ll one = f(i + 1, wt);
    ll two = 0;
    if(wt + w[i] <= W) two = f(i + 1, wt + w[i]) + v[i];
    return dp[i][wt] = max(one, two);
}
int32_t main()
{   
    opt();
    
    // memset(dp, -1, sizeof dp);
    cin >> n >> W;
    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    // cout << f(1, 0);
    
    for(int i = 1; i <= n; i++){
        ll ans = 0;
        for(int j = 0; j <= W; j++){
            ll one = dp[i - 1][j];
            ll two = 0;
            if(j >= w[i]) two = dp[i - 1][j - w[i]] + v[i];
            dp[i][j] = max(one, two);
        }
    }
    cout << dp[n][W];

    return 0;
}