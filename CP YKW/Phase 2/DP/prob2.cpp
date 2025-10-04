#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e5;
int dp[N];
int f(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;
    if(n == 3) return 2;
    int ans = f(n - 1) + f(n - 3);
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