// recursive
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 3e3 + 3;
// int dp[N][N];
// string s, t; 
// int n, m;
// int rec(int i, int j){
//     if(i == n or j == m) return 0;
//     if(dp[i][j] != -1) return dp[i][j];

//     int ans = max(rec(i + 1, j), rec(i, j + 1));
//     if(s[i] == t[j]) ans = max(ans, rec(i + 1, j + 1) + 1);

//     return dp[i][j] = ans;
// }

// int32_t main()
// {   
//     cin >> s >> t;
//     n = s.size(), m = t.size();

//     memset(dp, -1, sizeof dp);
//     int len = rec(0, 0);
    
//     string ans;
//     for(int i = 0, j = 0; i < n and j < m; ){
//         if(s[i] == t[j]){
//             ans += s[i]; i++, j++;
//         }
//         else if(dp[i + 1][j] >= dp[i][j + 1]) i++;
//         else j++;
//     }

//     cout << ans;

//     return 0;
// }
// iterative----------------------------------------------
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{   
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();

    int dp[n + 2][m + 2]; memset(dp, 0, sizeof dp);
    for(int i = n - 1; i >= 0; i--){
        for(int j = m - 1; j >= 0; j--){
            int ans = 0;
            if(s[i] == t[j]){
                ans = dp[i + 1][j + 1] + 1;
            }
            else ans = max(dp[i + 1][j], dp[i][j + 1]);
            dp[i][j] = ans; 
        }
    }

    string r = "";
    for(int i = 0, j = 0; i < n and j < m; ){
        if(s[i] == t[j]) r += s[i], i++, j++;
        else if(dp[i + 1][j] >= dp[i][j]) i++;
        else j++;
    }
    cout << r;

    return 0;
}

// TC = S (1 + T)
// S = number of states = n
// T = number of transition = k
// TC = nm (1 + 2)
    // = O (nm)