#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1), pos(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    // Count initial breaks
    int rounds = 1;
    for (int i = 1; i < n; ++i) {
        if (pos[i] > pos[i + 1]) ++rounds;
    }

    while (m--) {
        int u, v;
        cin >> u >> v;
        int x = a[u], y = a[v];

        set<int> affected = {x, y};
        for (int d : {-1, 1}) {
            if (1 <= x + d && x + d <= n) affected.insert(x + d);
            if (1 <= y + d && y + d <= n) affected.insert(y + d);
        }

        // Remove current breaks
        for (int i : affected) {
            if (i < n && pos[i] > pos[i + 1]) --rounds;
        }

        // Perform swap
        swap(a[u], a[v]);
        pos[a[u]] = u;
        pos[a[v]] = v;

        // Add new breaks
        for (int i : affected) {
            if (i < n && pos[i] > pos[i + 1]) ++rounds;
        }

        cout << rounds << '\n';
    }

    return 0;
}
