#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 5;
int par[N], Size[N], mn[N], mx[N];

void make(int u) {
    par[u] = u;
    Size[u] = 1;
    mn[u] = u;
    mx[u] = u;
}

int find(int u) {
    if (u != par[u])
        par[u] = find(par[u]);
    return par[u];
}

void Union(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) {
        if (Size[u] < Size[v]) swap(u, v);  // union by size
        par[v] = u;
        Size[u] += Size[v];
        mn[u] = min(mn[u], mn[v]);
        mx[u] = max(mx[u], mx[v]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) make(i);

    string s;
    while (m--) {
        cin >> s;
        if (s == "union") {
            int u, v; cin >> u >> v;
            Union(u, v);
        } else {
            int u; cin >> u;
            int leader = find(u);
            cout << mn[leader] << " " << mx[leader] << " " << Size[leader] << '\n';
        }
    }
    return 0;
}
