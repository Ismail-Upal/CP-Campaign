#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

ll mulmod(ll x, ll y, ll mod) {
  ll ans = 0;
  while (y > 0) {
    if (y & 1) {
      ans = (ans + x) % mod;
    }
    x = (x + x) % mod;
    y >>= 1;
  }
  return ans;
}

int power(int x, ll n, int mod) {
  int ans = 1 % mod;
  while (n > 0) {
    if (n & 1) {
      ans = mulmod(ans, x, mod);
    }
    x = mulmod(x, x, mod);
    n >>= 1;
  }
  return ans;
}


int solve(ll x, int a, int mod) {
  if (x == 0) {
    return 1 % mod;
  }
  if (x & 1) {
    ll p = x / 2;
    int cur = solve(p, a, mod);
    int ans = (cur + 1LL * power(a, p + 1, mod) * cur % mod) % mod;
    return ans;
  } else {
    int ans = (solve(x - 1, a, mod) + power(a, x, mod)) % mod;
    return ans;
  }
}

int32_t main() {   
    opt();
    int a; ll x; int m; 
    cin >> a >> x >> m;
    cout << solve(x - 1, a, m) << endl;
    return 0;
}
