#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6 + 3, mod = 1e9 + 7;
ll dp[N];
int f(int n){
    if(n == 0){
        return 1;
    }
    if(dp[n] != -1) return dp[n];
    ll ans = 0;
    for(int i = 1; i <= 6; i++){
        if(i <= n) ans += f(n - i) % mod;
        ans %= mod;
    }
    return dp[n] = ans % mod;
}
int32_t main()
{   
    opt();
    // memset(dp, -1, sizeof dp);
    int n; cin >> n;
    // cout << f(n) % mod << endl;

    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(j <= i) dp[i] = (dp[i] + dp[i - j]) % mod;
        }
    }
    cout << dp[n] ;
    
    return 0;
}