#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int dp[31][31][31];

int rec(int n, int m, int k){
    if(k == 0) return n * m * n * m;
    if(dp[n][m][k] != -1) return dp[n][m][k];

    int ans = INT_MAX;

    // horizontal cuts
    for(int i = 1; i < n; i++){
        for(int x = 0; x < k; x++){
            int top = rec(i, m, x);
            int bottom = rec(n - i, m, k - 1 - x);
            ans = min(ans, top + bottom);
        }
    }
    
    // vertical cuts
    for(int i = 1; i < m; i++){
        for(int x = 0; x < k; x++){
            int left = rec(n, i, x);
            int right = rec(n, m - i, k - 1 - x);
            ans = min(ans, left + right);
        }
    }

    return dp[n][m][k] = ans;
}

int32_t main()
{   
    opt();
    
    memset(dp, -1, sizeof dp);
    
    int n, m, k; cin >> n >> m >> k;
    cout << rec(n, m, k);
    
    return 0;
}