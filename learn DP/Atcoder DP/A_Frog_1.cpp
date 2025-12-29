#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    vector<int> h(n + 1);
    for(int i = 1; i <= n; i++) cin >> h[i];

    vector<int> dp(n + 1);
    for(int i = n; i >= 1; i--){
        int ans;
        if(i == n) ans = 0;
        else{
            ans = dp[i + 1] + abs(h[i] - h[i + 1]);
            if(i + 2 <= n) ans = min(ans, dp[i + 2] + abs(h[i] - h[i + 2]));
        }
        dp[i] = ans;
    }
    cout << dp[1];
    
    return 0;
}