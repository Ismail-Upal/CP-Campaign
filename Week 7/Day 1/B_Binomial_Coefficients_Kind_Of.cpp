#include <bits/stdc++.h>

using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long

const int M = 1e9 + 7;

int powm(int x, int n) {
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    int p = powm(x * x, n / 2);
    if (n % 2)
        return p * x % M;
    else
        return p;
}

void CoderAbhi27() {
    int t;
    cin >> t;
    vector<int> n(t), k(t);
    for (int i = 0; i < t; i++)
        cin >> n[i];
    for (int i = 0; i < t; i++)
        cin >> k[i];
    // Input

    for (int i = 0; i < t; i++) {
        cout << powm(2, k[i]) << '\n';
    }
}
// tc-> O(t*log(k))

int32_t main() {
    fastIO;

    int t = 1;
    // cin >> t;
    while (t--) {
        CoderAbhi27();
    }
    return 0;
}