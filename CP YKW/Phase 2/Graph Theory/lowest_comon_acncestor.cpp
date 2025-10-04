#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
int par[N];

void dfs(int u, int p) {
    par[u] = p;
    for (int v : g[u]) {
        if (v != p) {
            dfs(v, u);
        }
    }
}

vector<int> path(int v) {
    vector<int> ans;
    while (v != 0) {
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int find_lca(int x, int y) {
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);

    int min_len = min(path_x.size(), path_y.size());
    int lca = -1;

    for (int i = 0; i < min_len; i++) {
        if (path_x[i] == path_y[i]) {
            lca = path_x[i];
        } else {
            break;
        }
    }
    return lca;
}

int main() {
    int n;
    cin >> n;
    
    memset(par, -1, sizeof(par));

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);  // Assuming 1 as root

    int x, y;
    cin >> x >> y;
    cout << find_lca(x, y) << endl;

    return 0;
}
