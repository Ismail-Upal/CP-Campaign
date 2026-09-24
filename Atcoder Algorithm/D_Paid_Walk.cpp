#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 200010;
vector<pair<int, int>> g[N]; // {to, cost}

int N, M, L;
ll S, T;

set<int> good;  // vertices we can reach with good path

void dfs(int u, int steps, ll cur_cost) {
    if (steps == L) {
        if (cur_cost >= S && cur_cost <= T) {
            good.insert(u);
        }
        return;
    }

    // prune early if already too big (optional but helpful)
    if (cur_cost > T) return;

    for (auto [v, c] : g[u]) {
        // no need to check visited — we allow cycles
        dfs(v, steps + 1, cur_cost + c);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> L >> S >> T;

    for (int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        g[u].emplace_back(v, c);
    }

    // Start from vertex 1 with 0 steps and 0 cost
    dfs(1, 0, 0LL);

    if (good.empty()) {
        cout << "\n";
    } else {
        bool first = true;
        for (int v : good) {
            if (!first) cout << " ";
            cout << v;
            first = false;
        }
        cout << "\n";
    }

    return 0;
}