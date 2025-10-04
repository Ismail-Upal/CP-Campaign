#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3, mod = 1e9 + 7;
int n, m, a[N], dp[N][102];
 
int rec(int i, int prev){
    if(i > n){
        return 1;
    }
 
    if(i > 1 and a[i] != 0 and abs(a[i] - prev) > 1) return 0;
 
    if(dp[i][prev] != -1) return dp[i][prev];
 
    int ans = 0;
 
    if(a[i] != 0) ans = (ans % mod + rec(i + 1, a[i]) % mod) % mod;
    else{
        if(i == 1){
            for(int j = 1; j <= m; j++){
                ans = (ans % mod + rec(i + 1, j) % mod) % mod;
            }
        }
        else{
            if(prev - 1 >= 1) ans = (ans % mod + rec(i + 1, prev - 1) % mod) % mod;
            ans = (ans % mod + rec(i + 1, prev) % mod) % mod; 
            if(prev + 1 <= m) ans = (ans % mod + rec(i + 1, prev + 1) % mod) % mod;
        }
    }
 
    return dp[i][prev] = ans;
}
 
int32_t main()
{   
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
 
    memset(dp, - 1, sizeof dp);
 
    cout << rec(1, a[1]);
    
    return 0;

}