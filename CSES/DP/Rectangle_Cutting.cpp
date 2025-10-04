#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int dp[505][505];
int a, b; 
int rec(int i, int j){
    if(i == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int ans = 1e9;
    
    for(int k = 1; k < i; k++){
        ans = min(ans, rec(k, j) + rec(i - k, j) + 1);
    }
    for(int k = 1; k < j; k++){
        ans = min(ans, rec(i, k) + rec(i, j - k) + 1);
    }

    return dp[i][j] = ans;
}


int32_t main()
{   
    opt();
    
    memset(dp, -1, sizeof dp);
    cin >> a >> b;
    cout << rec(a, b);
    
    return 0;
}