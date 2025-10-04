#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, m; 
map<int, int> dp;
int rec(int level){
    if(level >= n) return 0;

    if(dp[level] != -1) return dp[level];

    int ans = rec(level + 1) + 1;
    if(level + m <= n) ans = min(ans, rec(level + m) + 1);

    return dp[level] = ans;
}

int32_t main()
{   
    opt();
    
    tc{
        // memset(dp, -1, sizeof dp);
        cin >> n >> m;
        // cout << rec(0) << endl;
        cout << (n / m) + (n - m * (n / m)) << endl;
    }

    return 0;
}