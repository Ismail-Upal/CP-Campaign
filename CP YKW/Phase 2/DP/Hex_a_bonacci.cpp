#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;
int mod = 10000007;
int dp[N];
int a, b, c, d, e, f, n;
int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n] != -1) return dp[n];
    return dp[n] = (fn(n-1) % mod + fn(n-2) % mod + fn(n-3) % mod + fn(n-4) % mod + fn(n-5) % mod + fn(n-6) % mod) % mod;
}
int32_t main()
{   
    opt();
    
    tc{
        memset(dp, -1, sizeof dp);
        cin >> a >> b >> c >> d >> e >> f >> n;
        cout << "Case " << _ << ": " << fn(n) % mod << endl;
    }
    
    return 0;
}