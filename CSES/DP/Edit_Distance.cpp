#include<bits/stdc++.h>
using namespace std;
const int N = 5e3 + 3;
string s, t;
int n, m;
int dp[N][N];

int rec(int i, int j){
    if(i == n) return m - j;
    if(j == m) return n - i;
    if(dp[i][j] != -1) return dp[i][j];

    int ans = 1e9;
    if(s[i] == t[j]) ans = rec(i + 1, j + 1);
    ans = min({ans, 1 + rec(i, j + 1), 1 + rec(i + 1, j), 1 + rec(i + 1, j + 1)});

    return dp[i][j] = ans;
}
 
int32_t main()
{   
    cin >> s >> t;
    n = s.size(), m = t.size();

    memset(dp, -1, sizeof dp);
    cout << rec(0, 0);
    
    return 0;
}