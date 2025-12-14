#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using ui = unsigned int;
const int INF = 1e9, SIZE = 1e5, MOD = 1e9 + 7, NEG = -1e9;
/*
//	    _   __  ___  __   __ _______ _______
//	   / | / / / _ \ \ \__\ \\__  __\\  __  \
//	  /  |/ / / /_\ \ \  ___ \  \ \   \ \ \  \
//	 / /|  / / ____  \ \ \  \ \ _\ \___\ \/  /
//	/_/ |_/ /_/    \__\ \_\  \_\\______\\___/

ID: mdnahidibnaharun
LANG: C++
TASK: practice
*/
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<vector<int>> beauty(n + 1, vector<int>(n + 1, 0));
    for (int l = 1; l <= n; l++)
    {
        vector<int> freq(n + 1, 0);
        int distinct = 0;
        for (int r = l; r <= n; r++)
        {
            if (freq[a[r]] == 0)
                distinct++;
            freq[a[r]]++;
            beauty[l][r] = distinct;
        }
    }

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, NEG));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int p = 1; p <= k; p++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp[j][p - 1] == NEG)
                    continue;
                dp[i][p] = max(dp[i][p], dp[j][p - 1] + beauty[j + 1][i]);
            }
        }
    }

    int ans = 0;
    for (int p = 1; p <= k; p++)
    {
        ans = max(ans, dp[n][p]);
    }

    cout << ans ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll Test_Case;
    cin >> Test_Case;
    while (Test_Case--)
    {
    solve();
        cout << endl;
    }

    return 0;
}