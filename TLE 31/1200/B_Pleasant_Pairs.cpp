#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        unordered_map<ll, ll> mp;
        
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            mp[x] = i;
        }
        
        ll ans = 0;
        for(ll i = 1; i <= 2 * n; i++){
            for(ll j = i + 1; j <= 2 * n; j++){
                if(i * j > 2 * n) break;
                if(mp[i] and mp[j]){
                    if(i * j == mp[i] + mp[j]) ans++;
                }
            }
        }   

        cout << ans << endl;
    }
    
    return 0;
}