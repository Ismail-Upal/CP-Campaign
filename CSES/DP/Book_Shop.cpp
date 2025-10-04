#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int n, x; cin >> n >> x ;
    int price[n + 1], pages[n + 1];

    for(int i = 1; i <= n; i++) cin >> price[i];
    for(int i = 1; i <= n; i++) cin >> pages[i];

    int dp[n + 1][x + 1];
    
    for(int i = 0; i <= n; i++){
        for(int m = 0; m <= x; m++){
            if(m == 0 or i == 0) dp[i][m] = 0;
            else{
                int op1 = dp[i - 1][m];
                int op2 = (m >= price[i]) ? dp[i - 1][m - price[i]] + pages[i] : 0 ;

                dp[i][m] = max(op1, op2);
            }
        }
    }
    
    cout << dp[n][x];
    
    return 0;
}