#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2, mod = 1e9 + 7;
int power(int x, long long n) { // O(log n)
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
int inverse(int a) {
  return power(a, mod - 2);
}
int fac[N], ifac[N];
void prec() { // O(n)
  fac[0] = 1;
  for (int i = 1; i < N; i++) {
    fac[i] = 1LL * fac[i - 1] * i % mod;
  }
  ifac[N - 1] = inverse(fac[N - 1]);
  for (int i = N - 2; i >= 0; i--) {
    ifac[i] = 1LL * ifac[i + 1] * (i + 1) % mod;
  }
}
int nCr(int n, int r) { // O(1)
  if (n < 0 or n < r) return 0;
  return 1LL * fac[n] * ifac[r] % mod * ifac[n - r] % mod;
}
int nPr(int n, int r) {
  if (n < 0 or n < r) return 0;
  return 1LL * fac[n] * ifac[n - r] % mod;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prec();
  string s; cin >> s;
  int n = s.size();
  int ans = fac[n];
  map<char, int> cnt;
  for (auto x: s) {
    cnt[x]++;
  }
  for (auto [_, c]: cnt) {
    ans = 1LL * ans * ifac[c] % mod;
  }
  cout << ans << '\n';
  return 0;
}