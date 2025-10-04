#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<pair<int, int>> g[N];
int dis[N];

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    fill(dis, dis + N, INT_MAX); // Initialize distances

    dis[src] = 0;
    q.push({0, src}); // Push (distance, node)

    while (!q.empty()) {
        auto par = q.top();
        q.pop();
        
        int cost = par.first;
        int node = par.second;

        if (cost > dis[node]) continue;

        for (auto child : g[node]) {
            int child_node = child.first;
            int child_cost = child.second;

            if (cost + child_cost < dis[child_node]) {
                dis[child_node] = cost + child_cost;
                q.push({dis[child_node], child_node});
            }
        }
    }
}

int main() {   
    int n, m; 
    cin >> n >> m;
    
    while (m--) {
        int u, v, w; 
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dijkstra(0);

    for (int i = 0; i < n; i++) {
        cout << i << " -> " << (dis[i] == INT_MAX ? -1 : dis[i]) << endl;
    }

    return 0;
}
