#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N, K;
    cin >> N >> K;

    if (K == 1) {
        cout << N << "\n";
    } else { // K == 2
        ll p = 1;
        while ((p << 1) <= N) {
            p <<= 1;
        }
        cout << 2 * (N - p) + 1 << "\n";
    }

    return 0;
}
