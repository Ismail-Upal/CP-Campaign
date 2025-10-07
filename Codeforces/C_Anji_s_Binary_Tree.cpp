#include <bits/stdc++.h>
using namespace std;
#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define tc    \
    int t;    \
    cin >> t; \
    for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 3e5 + 3;
vector<int> g[N];
vector<char> s(N);
ll dp[N];
int dfs(int u)
{
    if (g[u][0] + g[u][1] == 0)
        return 0;

    int ans = 1e9;
    if (s[u] == 'U')
    {
        if (g[u][0] != 0)
            ans = min(ans, 1 + dfs(g[u][0]));
        if (g[u][1] != 0)
            ans = min(ans, 1 + dfs(g[u][1]));
    }
    if (s[u] == 'L')
    {
        if (g[u][0] != 0)
            ans = min(ans, dfs(g[u][0]));
        if (g[u][1] != 0)
            ans = min(ans, 1 + dfs(g[u][1]));
    }
    if (s[u] == 'R')
    {
        if (g[u][1] != 0)
            ans = min(ans, dfs(g[u][1]));
        if (g[u][0] != 0)
            ans = min(ans, 1 + dfs(g[u][0]));
    }

    return ans;
}

int main()
{
    opt();

    tc
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
            cin >> s[i];
        for (int i = 1; i <= n; i++)
        {
            int u, v;
            cin >> u >> v;
            g[i].push_back(u);
            g[i].push_back(v);
        }

        cout << dfs(1) << endl;

        s.clear();
        for (int i = 1; i <= n; i++)
            g[i].clear();
    }

    return 0;
}