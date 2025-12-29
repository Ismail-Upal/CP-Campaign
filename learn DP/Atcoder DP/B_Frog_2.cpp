#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, k; cin >> n >> k;
    vector<int> h(n + 1);
    for(int i = 1; i <= n; i++) cin >> h[i];

    vector<int> dp(n + 1);
    for(int i = n; i >= 1; i--){
        int ans = 1e9;
        if(i == n) ans = 0;
        else{
            for(int j = 1; j <= k; j++){
                if(i + j <= n) ans = min(ans, dp[i + j] + abs(h[i] - h[i + j]));
            }
        }
        dp[i] = ans;
    }
    cout << dp[1];
    
    return 0;
}