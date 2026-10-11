/*
    Author    : MishkatIT
    Created   : Saturday 10-10-2026 23:17:55
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

void Solve() {
    int n; cin >> n;
    int p = 1;
    while (p * 2 <= n) p *= 2;
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i < p; i++) {
        v.push_back(i);
        v.push_back(i);
    }
    v.push_back(0);
    for (int i = p; i < 2 * p; i++) {
        v.push_back(i);
        v.push_back(i);    
    }
    int len = v.size() - 1;
    cout << len << '\n';
    for (int i = 1; i <= len; i++) {
        cout << (v[i] ^ v[i - 1]) << ' ';
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        Solve();
    }
    return 0;
}