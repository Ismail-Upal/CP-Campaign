#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6 + 3;
int n, dp[N];
int f(int n){
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    string s = to_string(n);
    int ans = N;
    for(int i = 0; i < sz(s); i++){
        int num = s[i] - '0';
        if(num != 0) ans = min(ans, f(n - num) + 1);
    }
    return dp[n] = ans;
}
int32_t main()
{   
    opt();
    
    cin >> n;
    // memset(dp, -1, sizeof dp);
    // cout << f(n);

    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int ans = INT_MAX;
        for(int j = 0; j < sz(s); j++){
            int num = s[j] - '0';
            if(num != 0) ans = min(ans, dp[i - num] + 1);
        }
        dp[i] = ans;
    }
    cout << dp[n];
    
    return 0;
}