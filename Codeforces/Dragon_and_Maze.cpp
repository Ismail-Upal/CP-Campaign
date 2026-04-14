#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        pair<int,int> S{-1,-1}, E{-1,-1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == 'D') S = {i,j};
                if (g[i][j] == 'E') E = {i,j};
            }
        }

        const int INF = 1e9;
        vector<vector<int>> dist(n, vector<int>(m, INF));
        queue<pair<int,int>> q;

        dist[S.first][S.second] = 0;
        q.push(S);

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (int d = 0; d < 4; d++) {
                int nr = r, nc = c;

                while (true) {
                    int tr = nr + dr[d], tc = nc + dc[d];
                    if (tr < 0 || tr >= n || tc < 0 || tc >= m) break; // outside maze

                    nr = tr; nc = tc;

                    if (g[nr][nc] == 'E') {
                        if (dist[nr][nc] > dist[r][c] + 1) {
                            dist[nr][nc] = dist[r][c] + 1;
                            q.push({nr, nc});
                        }
                        break;
                    }

                    if (g[nr][nc] == '#') {
                        // Breaks here; next state is this now-broken cell position
                        if (dist[nr][nc] > dist[r][c] + 1) {
                            dist[nr][nc] = dist[r][c] + 1;
                            q.push({nr, nc});
                        }
                        break;
                    }

                    // else '.', 'D' -> keep flying
                }
            }
        }

        cout << dist[E.first][E.second] << "\n";
    }

    return 0;
}