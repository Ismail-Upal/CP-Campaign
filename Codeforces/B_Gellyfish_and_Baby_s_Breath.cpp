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
    if (n & 1) ans = 1LL * ans * x % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}
int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        ll mxa = 0, mxb = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > a[mxa]) mxa = i;
            if(b[i] > b[mxb]) mxb = i;
            
            ll ans1 = (power(2, a[mxa], mod) + power(2, b[i - mxa], mod)) % mod;
            ll ans2 = (power(2, a[i - mxb], mod) + power(2, b[mxb], mod)) % mod;

            if(a[mxa] == b[mxb]){
                if(b[i - mxa] > a[i - mxb]) cout << ans1 << " ";
                else cout << ans2 << " ";
            }
            else if(a[mxa] > b[mxb]) cout << ans1 << " ";
            else cout << ans2 << " ";
        }
        cout << endl;
    }
    
    return 0;
}