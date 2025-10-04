#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9, mod = 1e9 + 7;

int power(int a, int k, int mod) {
  int ans = 1 % mod;
  while (k) {
    if (k & 1) ans = 1LL * ans * a % mod;
    a = 1LL * a * a % mod;
    k >>= 1;
  }
  return ans;
}
int inverse(int b, int mod) { 
  return power(b, mod - 2, mod);
}
int fac[N];
int comb(int n, int k) { 
  if (k > n) return 0;
  int up = fac[n];
  int down = 1LL * fac[k] * fac[n - k] % mod;
  return 1LL * up * inverse(down, mod) % mod;
}
int a, b, n;
bool is_good(int x) {
  while (x) {
    int digit = x % 10;
    if (digit != a and digit != b) {
      return false;
    }
    x /= 10;
  }
  return true;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fac[0] = 1;
  for (int i = 1; i < N; i++) {
    fac[i] = 1LL * fac[i - 1] * i % mod;
  }
  cin >> a >> b >> n;
  int ans = 0;
  for (int k = 0; k <= n; k++) {
    int digit_sum = k * a + (n - k) * b;
    if (is_good(digit_sum)) {
      int ways = comb(n, k);
      ans += ways;
      ans %= mod;
    }
  }
  cout << ans << '\n';
  return 0;
}
