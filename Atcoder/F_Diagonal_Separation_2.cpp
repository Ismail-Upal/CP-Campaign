#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 5e3 + 4;
int n, a[N][N], cost[N][N], dp[N][N];;

int main()
{   
    opt();
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char c; cin >> c;
            if(c == '.') a[i][j] = 0;
            else a[i][j] = 1;
            a[i][j] += a[i][j - 1];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            int l = a[i][j];
            int r = (n - j) - (a[i][n] - a[i][j]);
            cost[i][j] = l + r;
        }
    }

    for(int j = 0; j <= n; j++) dp[1][j] = cost[1][j];

    for(int i = 2; i <= n; i++){
        int suff_mn = 1e9;
        for(int j = n; j >= 0; j--){
            suff_mn = min(suff_mn, dp[i - 1][j]);
            dp[i][j] = cost[i][j] + suff_mn;
        }
    }

    int ans = 1e9;
    for(int j = 0; j <= n; j++){
        ans = min(ans, dp[n][j]);
    }
    cout << ans;
    
    return 0;
}