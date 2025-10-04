#include <bits/stdc++.h>
using namespace std;

const int N = 105;
const int INF = 1e9;
int d[N][N];

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize the distance matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) d[i][j] = 0;  // Distance to itself is 0
            else d[i][j] = INF;       // Otherwise, initialize as infinity
        }
    }

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        d[u][v] = w;  // Set distance for the directed edge
    }

    // Floyd-Warshall Algorithm
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (d[i][k] < INF && d[k][j] < INF) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }

    // Print the shortest path matrix
    cout << "Shortest Distance Matrix:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] == INF) cout << "INF ";
            else cout << d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
