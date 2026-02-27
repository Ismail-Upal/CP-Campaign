#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        long long ans = 1LL * n * (n + 1) / 2; // sum of the "+1" part over all subarrays

        for (int i = 2; i <= n; i++) {
            if (a[i] != a[i-1] + 1) {
                ans += 1LL * (i - 1) * (n - i + 1);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}