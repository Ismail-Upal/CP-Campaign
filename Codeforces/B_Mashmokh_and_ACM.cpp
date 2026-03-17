#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int mod = 1e9 + 7, N = 2004, K = 2004;
int n, k; 
ll dp[N][K];

int rec(int prev, int i){
    if(i > k) return 1;
    if(dp[prev][i] != -1) return dp[prev][i];

    int ans = 0;
    for(int j = prev; j <= n; j += prev){
        ans = ((ans % mod) + (rec(j, i + 1) % mod)) % mod; 
    }

    return dp[prev][i] = ans;
}

void Solve(){
    cin >> n >> k;
    memset(dp, -1, sizeof dp);
    cout << rec(1, 1) % mod;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}