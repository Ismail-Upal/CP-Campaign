#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int dp[103][103], v[103];

int sum(int i, int j){
    int ans = 0;
    for(int k = i; k <= j; k++){
        ans += v[k];
        ans %= 100;
    }
    return ans;
}

int rec(int i, int j){
    if(i >= j) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int ans = 1e9;
    for(int k = i; k < j; k++){
        int left = rec(i, k);
        int right = rec(k + 1, j);
        int cost = left + right + (sum(i, k) * sum(k + 1, j));
        ans = min(ans, cost);
    }

    return dp[i][j] = ans;
}

int32_t main()
{   
    opt();

    int n;
    while(cin >> n){
        for(int i = 0; i < n; i++) cin >> v[i];
        memset(dp, -1, sizeof dp);

        cout << rec(0, n - 1) << endl;
    }
    
    return 0;
}