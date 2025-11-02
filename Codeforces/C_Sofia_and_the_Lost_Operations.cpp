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
int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> b(n);
        unordered_map<long long int, int, custom_hash> nai;
        unordered_map<long long int, int, custom_hash> mpb;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            b[i] = x;
            if(x == a[i]) nai[x]++; 
            else mpb[x]++;
        }
        unordered_map<long long int, int, custom_hash> mpd;

        int m; cin >> m;
        vector<int> d(m);
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            d[i] = x;
            mpd[x]++;
        }

        int ok = 1;
        for(auto [i, x] : mpb){
            if(mpd[i] < x) ok =0 ;
        }
        // for(auto i : se) cout << i << ' ' ;
        if(ok){
            if(mpb[d[m - 1]] == 0 and nai[d[m - 1]] == 0) ok = 0;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}