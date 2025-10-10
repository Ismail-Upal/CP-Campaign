#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'

// Function to find minimum operations
int solve(string s) {
    int n = s.size();
    string target;
    for (int i = 0; i < n; i++) target += (i % 2 == 0 ? '0' : '1');

    vector<int> a(n);
    for (int i = 0; i < n; i++) a[i] = s[i] - '0';

    int ops = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != (target[i] - '0')) {
            if (i + 1 >= n) return -1; // can't fix last bit
            // flip bits at i, i+1, i+2
            for (int j = i; j <= i + 2 && j < n; j++) a[j] ^= 1;
            ops++;
        }
    }

    for (int i = 0; i < n; i++)
        if (a[i] != (target[i] - '0')) return -1;

    return ops;
}

int main() {
    opt();
    tc {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
