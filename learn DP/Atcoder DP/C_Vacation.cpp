#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    vector<int> a(n + 1), b(n + 1), c(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i];

    vector<vector<int>> dp(n + 1, vector<int> (4));
    
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= 3; j++){
            int ans = 0;
            if(i == n){
                if(j == 1) ans = a[i];
                if(j == 2) ans = b[i];
                if(j == 3) ans = c[i];
            }
            else{
                if(j == 1) ans = max(dp[i + 1][2], dp[i + 1][3]) + a[i];
                if(j == 2) ans = max(dp[i + 1][1], dp[i + 1][3]) + b[i];
                if(j == 3) ans = max(dp[i + 1][1], dp[i + 1][2]) + c[i];
            }
            dp[i][j] = ans;
        }
    }
    
    cout << max({dp[1][1], dp[1][2], dp[1][3]}) ;
    
    return 0;
}