#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tc int t; cin >> t; while(t--)
const int N = 1e6 + 5;
const int MOD = 1e9 + 7;

int dp[N][2];

// rec(i, x): Number of ways to form sequence of length i ending in state x (0 or 1)
int rec(int i, int x) {
    if (i == 1) return 1;  // Base case: only 1 way of forming sequence of length 1

    if (dp[i][x] != -1) return dp[i][x];

    int ans = 0;

    if (x == 1) {
        // From i-1:
        // 4 transitions from (i-1, 1) to (i, 1)
        // 1 transition from (i-1, 0) to (i, 1)
        ans = (4 * rec(i - 1, 1) % MOD + rec(i - 1, 0)) % MOD;
    } else {
        // From i-1:
        // 2 transitions from (i-1, 0) to (i, 0)
        // 1 transition from (i-1, 1) to (i, 0)
        ans = (2 * rec(i - 1, 0) % MOD + rec(i - 1, 1)) % MOD;
    }

    return dp[i][x] = ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    memset(dp, -1, sizeof dp);

    tc {
        int n;
        cin >> n;
        int result = (rec(n, 0) + rec(n, 1)) % MOD;
        cout << result << '\n';
    }

    return 0;
}
