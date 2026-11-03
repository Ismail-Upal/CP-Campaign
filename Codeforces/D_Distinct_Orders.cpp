#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> offset(n + 1);
    for (int k = 1; k <= n; ++k) offset[k] = (1 << k) - 2;

    vector<char> used(1 << (n + 1), 0);
    int c = 0;
    vector<int> seq;

    while (true) {
        int chosen = -1;
        for (int k = n; k >= 1; --k) {
            int mask = (1 << k) - 1;
            int idx = offset[k] + (c & mask);
            if (!used[idx]) {
                used[idx] = 1;
                c ^= mask;
                seq.push_back(k);
                chosen = k;
                break;
            }
        }
        if (chosen == -1) break;
    }

    cout << seq.size() << '\n';
    for (int i = 0; i < (int)seq.size(); ++i) {
        if (i) cout << ' ';
        cout << seq[i];
    }
    cout << '\n';
}