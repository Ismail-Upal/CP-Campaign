#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ull = unsigned long long;
using u128 = unsigned __int128;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
ull mulmod(ull x, ull y, u128 mod) { // O(1)
  return (ull)((u128)x * y % mod);
}

ull power(ull x, ull n, u128 mod) { // O(log n), (x^n) mod 2^64
  ull ans = 1;
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
    
    tc{
        ull a, b; string m; cin >> a >> b >> m;
        u128 mod = 0;
        for(auto i : m){
            mod = mod * 10 + (i - '0');
        }
        cout << power(a, b, mod) << endl;
    }
    
    return 0;
}