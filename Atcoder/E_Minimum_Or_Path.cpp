#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
vector<pair<int, int>> graph[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }

    // Use set to avoid visiting the same node with same OR again
    vector<unordered_set<int>> visited(N + 1);

    // Priority queue for BFS: {current_OR, current_node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.emplace(0, 1);
    visited[1].insert(0);

    while (!pq.empty()) {
        auto [cur_or, u] = pq.top();
        pq.pop();

        if (u == N) {
            cout << cur_or << '\n';
            return 0;
        }

        for (auto [v, w] : graph[u]) {
            int new_or = cur_or | w;
            if (!visited[v].count(new_or)) {
                visited[v].insert(new_or);
                pq.emplace(new_or, v);
            }
        }
    }

    // If no path found (shouldn't happen in a connected graph)
    cout << -1 << '\n';
    return 0;
}
