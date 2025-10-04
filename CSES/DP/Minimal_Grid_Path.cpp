#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl '\n'

int n;
char g[3003][3003];
string dp[3003][3003];

string rec(int i, int j) {
    if (i == n-1 && j == n-1) return string(1, g[i][j]);
    if (i >= n || j >= n) return string(1e9, 'z' + 1); // Invalid path
    if (dp[i][j] != "") return dp[i][j];

    string ans = string(1e9, 'z' + 1); // Initialize to large string
    if (i + 1 < n && j + 1 < n) {
        string down = g[i+1][j] + rec(i+1, j);
        string right = g[i][j+1] + rec(i, j+1);
        ans = min(down, right);
    } else if (i + 1 < n) {
        ans = g[i+1][j] + rec(i+1, j);
    } else if (j + 1 < n) {
        ans = g[i][j+1] + rec(i, j+1);
    }
    return dp[i][j] = ans;
}

int main() {
    opt();
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];
    cout << g[0][0] + rec(0, 0) << endl;
    return 0;
}