#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6+3;
int dp[N];
int f(int n){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    int ans = f(n - 1) + 1;
    if(n % 2 == 0){
        ans = min(ans, f(n / 2) + 1);
    }
    if(n % 3 == 0){
        ans = min(ans, f(n / 3) + 1);
    }
    return dp[n] = ans;
}
int32_t main()
{   
    opt();
    memset(dp, -1, sizeof dp);
    int n; cin >> n;
    cout << f(n);
    
    return 0;
}