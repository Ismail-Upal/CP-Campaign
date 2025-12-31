#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<int> g[N];
vector<int> top_order;
int vis[N]; 
bool cycle;

void dfs(int u) {
    vis[u] = 1;

    for (int v : g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
        else if (vis[v] == 1) {
            cycle = true; 
            return;
        }
    }

    vis[u] = 2;
    top_order.push_back(u);
}

int main() {

    int n, m;
    cin >> n >> m;

    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(i);
    }

    if(cycle) {
        cout << "-1\n";
        return 0;
    }

    reverse(top_order.begin(), top_order.end());
    for (int x : top_order) cout << x << " ";

    return 0;
}
