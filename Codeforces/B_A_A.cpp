#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
ll power(ll x, ll n) { // O(log n) iterative
  ll ans = 1;
  while (n > 0) {
    if (n & 1) {
      ans = 1LL * ans * x;
    }
    x = 1LL * x * x ;
    n >>= 1;
  }
  return ans;
}
int32_t main()
{   
    opt();
    
    ll b; cin >> b;
    for(ll i = 1; i <= 20; i++){
        ll ans = 1;
        for(ll j = 1; j <= i; j++){
            ans *= i;
            if(ans > b) break;
        }
        if(ans == b){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}