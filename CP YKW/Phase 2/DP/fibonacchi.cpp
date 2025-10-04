#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int dp[1000000];
int fibo(int i){
    if(i == 0 or i == 1) return i;
    if(dp[i] != -1) return dp[i];
    return dp[i] = fibo(i - 1) + fibo(i - 2);
}
int32_t main()
{   
    opt();
    
    memset(dp, -1, sizeof(dp));
    cout << fibo(5);
    
    return 0;
}