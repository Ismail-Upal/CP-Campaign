#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int mod = 998244353, N = 1e7;
int dp[N];
int fibo(int n){
    if(n <= 2) return 1 % mod;
    if(dp[n] != -1) return dp[n];
    return dp[n] = (fibo(n - 1) + fibo(n - 2)) % mod;
}
int32_t main()
{   
    opt();
    memset(dp, -1, sizeof(dp));
    int n; cin >> n;
    cout << fibo(n);
    
    return 0;
}