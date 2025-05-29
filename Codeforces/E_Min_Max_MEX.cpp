#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; while(t--)
#define endl '\n'
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
  unordered_map<int, int, custom_hash> mp; // this will work when the key is an int or long long int
int main() {   
    opt();
    
    tc {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        auto ok = [&](int mex) {
            int seg = 0, mx = 0;
            unordered_map<int, int, custom_hash> mp;
            for(int i = 0; i < n; i++){
                if(v[i] < mex) mp[v[i]]++;
                if(mp[v[i]] == 1) mx++;
                
                if(mx == mex){
                    seg++;
                    mp.clear();
                    mx = 0;
                }
            }
            return seg >= k;
        };

        int l = 0, r = n, ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (ok(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
