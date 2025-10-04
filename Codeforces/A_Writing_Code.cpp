#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 505;
int n, m, b, mod;
int a[N], dp[N][N][N];

int rec(int i, int line, int bug){
    if(i > n){
        if(line == m and bug <= b) return 1;
        else return 0;
    }
    if(line > m) return 0;
    if(line == m){
        if(bug <= b) return 1;
        else return 0;
    }
    if(dp[i][line][bug] != -1) return dp[i][line][bug];

    int ans = 0;
    int mx_line = min(m - line, (b - bug) / a[i]);
    for(int j = 0; j <= mx_line; j++){
        if((j * a[i]) + bug > b) break;
        ans += rec(i + 1, line + j, (j * a[i]) + bug);
        ans %= mod;
    }

    return dp[i][line][bug] = ans;
}

int main()
{   
    opt();
    
    cin >> n >> m >> b >> mod;
    for(int i = 1; i <= n; i++) cin >> a[i];

    memset(dp, -1, sizeof dp);
    cout << rec(1, 0, 0) % mod;
    
    return 0;
}