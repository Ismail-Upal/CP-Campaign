#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int n, m, a[N], b[N], dp[N][N];
vector<int> path;

int rec(int i, int j){
    if(i == n or j == m) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int ans = 0;
    if(a[i] == b[j]) ans = 1 + rec(i + 1, j + 1);
    else ans = max(rec(i + 1, j), rec(i, j + 1));

    return dp[i][j] = ans;
}

int32_t main()
{   
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    memset(dp, -1, sizeof dp);
    cout << rec(0, 0);

    int i = 0, j = 0;
    while(i < n and j < m){
        if(a[i] == b[j]){
            path.push_back(a[i]);
            i++, j++;
        }
        else if(dp[i + 1][j] > dp[i][j + 1]) i++;
        else j++;
    }
    cout << endl;
    for(auto i : path) cout << i << ' ';
    
    return 0;
}