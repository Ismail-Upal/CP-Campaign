#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;
int a[N], b[N], c[N], dp[4][N];
int n;
int f(int day, int i){
    if(i > n) return 0;
    int ans = 0;
    if(day == 1) ans = a[i] + max(f(2, i + 1), f(3, i + 1));
    if(day == 2) ans = max(ans, b[i] + max(f(1, i + 1), f(3, i + 1)));
    if(day == 3) ans = max(ans, c[i] + max(f(1, i + 1), f(2, i + 1)));

    return ans;
}
int32_t main()
{   
    opt();
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    
    // cout << max({f(1, 0), f(2, 0), f(3, 0)});
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            int ans = 0;
            if(j == 1) ans = a[i] + max(dp[2][i - 1], dp[3][i - 1]);
            if(j == 2) ans = max(ans, b[i] + max(dp[1][i - 1], dp[3][i - 1]));
            if(j == 3) ans = max(ans, c[i] + max(dp[1][i - 1], dp[2][i - 1]));
            dp[j][i] = ans; 
        }
    }
    cout << max({dp[1][n], dp[2][n], dp[3][n]});
    
    return 0;
}