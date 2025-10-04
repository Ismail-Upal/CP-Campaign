#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll mod = 998244353;
ll power(ll x, ll n, ll mod) { // O(log n) iterative
    ll ans = 1 % mod;
    while (n > 0) {
      if (n & 1) {
        ans = 1LL * ans * x % mod;
      }
      x = 1LL * x * x % mod;
      n >>= 1;
    }
    return ans;
  }
int32_t main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        ll x = 0, y = 1e9, val = 0;
        for(ll i = 1; i <= n; i++){
            x = max(val, x), y = min(val, y);

            ll tmp = power(2, i - 1, mod); 
            ll v1 = val + tmp;
            ll v2 = val - tmp;
            
            ll op1 = ((max(x, v1) % mod) - (min(y, v1) % mod) + mod) % mod;
            ll op2 = ((max(x, v2) % mod) - (min(y, v2) % mod) + mod) % mod;

            if(i % 2){ // alice
                if(op1 < op2){
                    val = v1;
                    x = max(x, v1), y = min(y, v1);
                }
                else{
                    val = v2;
                    x = max(x, v2), y = min(y, v2);
                }
            }
            else if(i % 2 == 0){ // bob 
                if(op1 > op2){
                    val = v1;
                    x = max(x, v1), y = min(y, v1);
                }
                else{
                    val = v2;
                    x = max(x, v2), y = min(y, v2);
                }
            }   
        }
        cout << ((x % mod) - (y % mod) + mod) % mod << endl;
    }
    
    return 0;
}