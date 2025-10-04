#include<bits/stdc++.h>
using namespace std;

int power(int a, int k, int mod) { // a^k % mod
  int ans = 1 % mod;
  while (k) {
    if (k & 1) ans = 1LL * ans * a % mod;
    a = 1LL * a * a % mod;
    k >>= 1;
  }
  return ans;
}
int leading_3(int n, int k) {
  double p = k * log10(n);
  double q = p - floor(p);
  double x = pow(10, q);
  return floor(x * 100);
}
int trailing_3(int n, int k) {
  return power(n, k, 1000);
}
string format(int x) { // make it of length 3 by appending necessary 0s
  string x_str = to_string(x);
  while (x_str.size() < 3) {
    x_str.insert(x_str.begin(), '0');
  }
  return x_str;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    cout << format(leading_3(n, k)) << "..." << format(trailing_3(n, k)) << '\n';
  }
  return 0;
}