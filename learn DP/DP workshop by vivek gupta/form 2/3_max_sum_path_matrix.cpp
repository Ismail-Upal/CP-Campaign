#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, m, a[100][100];
int dp[100][100], done[100][100];

int rec(int r, int c){
    // pruning 
    if(r < 0 or c < 0){
        // not possible
        return -1e9;
    }
    // basecase
    if(r == 0 and c == 0) return a[0][0];

    // cache check
    if(done[r][c]) return dp[r][c];

    // compute
    int ans = -1e9;
    if(r != 0) ans = max(ans, rec(r - 1, c) + a[r][c]);
    if(c != 0) ans = max(ans, rec(r, c - 1) + a[r][c]);

    // save and return
    done[r][c] = 1;
    return dp[r][c] = ans;
}


int32_t main()
{   
    opt();
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }  
    
    cout << rec(n - 1, m - 1);
    
    return 0;
}