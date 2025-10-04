#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int power(int x, int n, int mod) { // O(log n)
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

// m is prime
int inverse(int a, int m) { // O(log m)
  return power(a, m - 2, m);
}
int32_t main()
{   
    opt();
    
    int a, b, m; cin >> a >> b >> m;
    cout << 1LL * a * inverse(b, m) % m ;
    
    return 0;
}