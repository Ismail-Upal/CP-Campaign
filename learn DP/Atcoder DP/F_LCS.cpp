#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 2, vector<int> (m + 2));

    for(int i = n - 1; i >= 0; i--){
        for(int j = m - 1; j >= 0; j--){
            if(s[i] == t[j]){
                dp[i][j] = dp[i + 1][j + 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }

    int len = dp[0][0];

    string ans = "";
    for(int i = 0, j = 0; i < n and j < m; ){
        if(s[i] == t[j]){
            ans += s[i];
            i++; j++;
        }
        else if(dp[i + 1][j] >= dp[i][j + 1]) i++;
        else j++;
    }

    cout << ans << endl;
    
    return 0;
}