#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int n, x[10000], dp[1009][1000];
int rec(int l, int r){
    if(l == r - 1) return 0;

    if(dp[l][r] != -1) return dp[l][r];
    int ans = 1e9;
    for(int m = l + 1; m <= r - 1; m++){
        ans = min(ans, x[r] - x[l] + rec(l, m) + rec(m, r));
    }

    return dp[l][r] = ans;
}

int32_t main()
{   
    opt();
    
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> x[i];
    x[0] = 0;
    memset(dp, -1, sizeof dp);
    cout << rec(0, n) << endl;
    
    return 0;
}