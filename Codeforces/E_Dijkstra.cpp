#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using ll = long long;

const int N = 1e5 + 3;
int n, m;
vector<pair<int, int>> g[N];
int dis[N], par[N];  

struct cmp {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second; 
    }
};

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    fill(dis, dis + n + 1, 1e9);
    fill(par, par + n + 1, -1);

    dis[src] = 0;
    pq.push({src, 0});

    while (!pq.empty()) {
        auto cur = pq.top();
        pq.pop();

        int u = cur.first;
        int u_w = cur.second;

        if (u_w > dis[u]) continue; 

        for (auto child : g[u]) {
            int v = child.first;
            int w = child.second;

            if (dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
                par[v] = u;
                pq.push({v, dis[v]});
            }
        }
    }
}

int main() {
    opt();
    
    cin >> n >> m;
    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dijkstra(1);

    if (dis[n] == 1e9) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> path;
    for (int cur = n; cur != -1; cur = par[cur])
        path.push_back(cur);

    reverse(path.begin(), path.end());

    for (int x : path) cout << x << " ";
    cout << endl;

    return 0;
}
