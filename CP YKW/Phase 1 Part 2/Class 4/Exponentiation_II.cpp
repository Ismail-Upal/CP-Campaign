#include<bits/stdc++.h>
using namespace std;

int power(int x, long long n, int mod) { // O(log n)
  int ans = 1 % mod;
  while (n > 0) {
    if (n & 1) {
      ans = 1LL * ans * x % mod;
    }
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int mod = 1e9 + 7;
  int q; cin >> q;
  while (q--) {
    int a, b, c; cin >> a >> b >> c;
    int e = power(b, c, mod - 1);
    int ans = power(a, e, mod);
    cout << ans << '\n';
  }
  return 0;
}