#include <bits/stdc++.h>
using namespace std;

class edge {
public:
    int u, v, w;
    edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

const int N = 1e5 + 5;
int dis[N], parent[N];

int main() {
    int n, m, src;
    cin >> n >> m >> src;  // Taking source node as input
    vector<edge> edge_list;

    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        edge_list.push_back(edge(u, v, w));
    }

    fill(dis, dis + n + 1, INT_MAX);
    fill(parent, parent + n + 1, -1);

    dis[src] = 0;  // Set source distance to 0
    int cycle_node = -1;

    // Bellman-Ford Algorithm
    for (int i = 1; i <= n; i++) {
        cycle_node = -1;
        for (edge e : edge_list) {
            int u = e.u, v = e.v, w = e.w;
            if (dis[u] < INT_MAX && dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
                parent[v] = u;
                cycle_node = v;
            }
        }
    }

    // **Negative Cycle Detection**
    if (cycle_node == -1) {
        cout << "No negative cycle found.\n";
        cout << "Shortest distances from node " << src << ":\n";
        for (int i = 1; i <= n; i++) {
            cout << "Node " << i << ": " << (dis[i] == INT_MAX ? "INF" : to_string(dis[i])) << endl;
        }
    } else {
        cout << "Negative cycle detected! Cycle path:\n";

        // **Find the start of the cycle**
        for (int i = 0; i < n; i++) {
            cycle_node = parent[cycle_node];  // Move n steps back to ensure it's inside the cycle
        }

        // **Backtrack to find the cycle**
        vector<int> path;
        int cur = cycle_node;
        while (true) {
            path.push_back(cur);
            cur = parent[cur];
            if (cur == cycle_node && path.size() > 1) break;
        }
        path.push_back(cycle_node);

        // **Print the cycle path in correct order**
        reverse(path.begin(), path.end());
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
