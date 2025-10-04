#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
using i128 = __int128;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const ll mod = 109546051211;
const int N = 1e8;
ll dp[N];
ll fact(int n){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1LL * n * fact(n - 1) % mod;
}
int32_t main()
{   
    opt();
    memset(dp, -1 ,sizeof(dp));
    int n; cin >> n;
    ll ans = 1;
    for(int i = 1; i <= n; i++){
        ans = (i128) ans * fact(i) % mod;
    }
    cout << ans;
    
    return 0;
}