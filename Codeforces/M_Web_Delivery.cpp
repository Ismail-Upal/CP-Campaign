#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = (ll)4e18;

struct Edge {
    int to;
    ll cap;
};

struct Dinic {
    int N;
    vector<vector<Edge>> G;
    vector<int> level, it;

    Dinic(int n) : N(n), G(n), level(n), it(n) {}

    void addEdge(int u, int v, ll cap) {
        Edge a = {v, cap};
        Edge b = {u, 0};
        G[u].push_back(a);
        G[v].push_back(b);
    }

    bool bfs(int s, int t) {
        fill(level.begin(), level.end(), -1);
        queue<int> q;
        level[s] = 0;
        q.push(s);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (auto &e : G[u]) {
                if (e.cap > 0 && level[e.to] == -1) {
                    level[e.to] = level[u] + 1;
                    q.push(e.to);
                }
            }
        }
        return level[t] != -1;
    }

    ll dfs(int u, int t, ll f) {
        if (u == t) return f;
        for (int &i = it[u]; i < (int)G[u].size(); i++) {
            Edge &e = G[u][i];
            if (e.cap > 0 && level[e.to] == level[u] + 1) {
                ll ret = dfs(e.to, t, min(f, e.cap));
                if (ret > 0) {
                    e.cap -= ret;
                    G[e.to][i ^ 1].cap += ret;
                    return ret;
                }
            }
        }
        return 0;
    }

    ll maxFlow(int s, int t) {
        ll flow = 0;
        while (bfs(s, t)) {
            fill(it.begin(), it.end(), 0);
            while (true) {
                ll f = dfs(s, t, INF);
                if (!f) break;
                flow += f;
            }
        }
        return flow;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int r, c;
        cin >> r >> c;

        vector<vector<ll>> A(r, vector<ll>(c));
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> A[i][j];

        vector<ll> d(c);
        for (int j = 0; j < c; j++)
            cin >> d[j];

        int S = 0;
        int chemicalStart = 1;
        int sellerStart = chemicalStart + r;
        int Tnode = sellerStart + c;

        Dinic dinic(Tnode + 1);

        // Source → Chemicals
        for (int i = 0; i < r; i++) {
            dinic.addEdge(S, chemicalStart + i, INF);
        }

        // Chemicals → Sellers
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                dinic.addEdge(chemicalStart + i,
                              sellerStart + j,
                              A[i][j]);
            }
        }

        // Sellers → Sink
        for (int j = 0; j < c; j++) {
            dinic.addEdge(sellerStart + j, Tnode, d[j]);
        }

        cout << dinic.maxFlow(S, Tnode) << "\n";
    }

    return 0;
}
