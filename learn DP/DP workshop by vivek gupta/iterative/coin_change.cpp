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
    
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int dp[n + 1][m + 1];

    for(int i = n; i >= 0; i--){
        for(int j = 0; j <= m; j++){
            if(i == n){ // base case
                if(j == 0) dp[i][j] = 1;
                else dp[i][j] = 0;
            }
            else{ // general
                int ans = 0;
                if(dp[i + 1][j]) ans = 1;
                if(j >= v[i] and dp[i][j - v[i]]) ans = 1;
                dp[i][j] = ans;
            }
        }
    }

    cout << dp[0][n] ;
    
    return 0;
}