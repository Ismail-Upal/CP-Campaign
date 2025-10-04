#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, m; 
string a, b;
int dp[1000][1000];
int rec(int i, int j){
    // pruning 

    // base case
    if(i >= n or j >= m) return 0;

    // cache check
    if(dp[i][j] != -1) return dp[i][j];

    // compute
    int ans = 0;
    ans = max(ans, rec(i + 1, j));
    ans = max(ans, rec(i, j + 1));
    if(a[i] == b[j]) ans = max(ans, rec(i + 1, j + 1) + 1);

    // save and return
    return dp[i][j] = ans;
}
int32_t main()
{   
    opt();
    
    cin >> n >> m;
    cin >> a >> b;
    memset(dp, -1, sizeof dp);

    cout << rec(0, 0);
    
    return 0;
}