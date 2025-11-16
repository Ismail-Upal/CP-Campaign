#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        unordered_set<int> seen;
        int ops = 0;
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            if (seen.count(v)) {
                ops++;
                seen.clear();
            }
            seen.insert(v);
        }
        cout << ops << "\n";
    }
    return 0;
}
