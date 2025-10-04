#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl '\n'

const int N = 1005, mod = 1e9 + 7;
int g[N][N];
ll dp[N][N];

int32_t main()
{
    opt();

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        g[x][y] = 1;
    }

    dp[n][m] = (g[n][m] == 0 ? 1 : 0);

    for (int i = n; i >= 1; i--) {
        for (int j = m; j >= 1; j--) {
            if (g[i][j]) continue;
            if (i < n && !g[i + 1][j]) dp[i][j] = (dp[i][j] + dp[i + 1][j]) % mod;
            if (j < m && !g[i][j + 1]) dp[i][j] = (dp[i][j] + dp[i][j + 1]) % mod;
        }
    }

    cout << dp[1][1] << endl;

    return 0;
}
