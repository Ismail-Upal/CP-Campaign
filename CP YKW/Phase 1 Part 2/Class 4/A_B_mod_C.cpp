#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
using ull = unsigned long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc ull t; cin >> t; for (ull _ = 1; _ <= t; _++)
//-------------------------------------------
ull mulmod(ull x, ull y, ull mod) { // O(log y) , (x * y) % mod
  ull ans = 0;
  while (y > 0) {
    if (y & 1) {
      ans = (ans + x) % mod;
    }
    x = (x + x) % mod;
    y >>= 1;
  }
  return ans;
}
ull power(ull x, ll n, ull mod) { // O(log n) iterative
  ull ans = 1 % mod;
  while (n > 0) {
    if (n & 1) {
      ans = mulmod(ans, x, mod);
    }
    x = mulmod(x, x, mod);
    n >>= 1;
  }
  return ans;
}

int32_t main()
{   
    opt();
    
    ull a, b, c; 
    while(cin >> a >> b >> c){
        cout << power(a, b, c) << endl;
    }
    
    return 0;
}