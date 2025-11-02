#include <bits/stdc++.h>
using namespace std;

long long dp[20][2][2];
string S;
int N;

long long rec(int pos, int tight, int lead) {
    if (pos == N) {
        return lead ? 0 : 1;
    }
    if (!tight && dp[pos][tight][lead] != -1) {
        return dp[pos][tight][lead];
    }
    long long ans = 0;
    int up = tight ? (S[pos] - '0') : 9;
    if (lead) {
        // Place 0
        int nt = tight && (0 == up);
        ans += rec(pos + 1, nt, 1);
        // Place 6
        if (6 <= up) {
            nt = tight && (6 == up);
            ans += rec(pos + 1, nt, 0);
        }
        // Place 9
        if (9 <= up) {
            nt = tight && (9 == up);
            ans += rec(pos + 1, nt, 0);
        }
    } else {
        for (int d : {6, 9}) {
            if (d <= up) {
                int nt = tight && (d == up);
                ans += rec(pos + 1, nt, 0);
            }
        }
    }
    if (!tight) {
        dp[pos][tight][lead] = ans;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        long long l, r;
        cin >> l >> r;
        auto count_nice = [&](long long x) -> long long {
            if (x <= 0) return 0;
            S = to_string(x);
            N = S.size();
            memset(dp, -1, sizeof(dp));
            return rec(0, 1, 1);
        };
        long long res = count_nice(r) - count_nice(l - 1);
        cout << res << '\n';
    }
    return 0;
}