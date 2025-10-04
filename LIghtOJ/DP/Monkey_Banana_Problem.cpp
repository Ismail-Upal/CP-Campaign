#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        ll a[n + 1][n + 1];
        for(int i = 1; i <= 2 * n - 1; i++){
            int x = min(i, n), y = max(1, i - n + 1);
            for(int j = y; j <= min(i, n); j++, x--) cin >> a[x][j]; 
        }

        ll dp[n + 3][n + 3]; memset(dp, 0, sizeof dp);

        for(int i = n; i >= 1; i--){
            for(int j = n; j >= 1; j--){
                ll ans = 0;
                if(i + 1 <= n) ans = dp[i + 1][j];
                if(j + 1 <= n) ans = max(ans, dp[i][j + 1]);
                dp[i][j] = ans + a[i][j];
            }
        }

        cout << "Case " << _ << ": " << dp[1][1] << endl;
    }
    
    return 0;
}