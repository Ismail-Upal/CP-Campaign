#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        unordered_map<int, int> mp;
        
        auto factor = [&](int x){
            set<int> f;
            for(int i = 2; i * i <= x; i++) {
                if(x % i == 0){
                    while(x % i == 0) {
                        f.insert(i);
                        x /= i;
                    }
                }
            }
            if(x > 1) f.insert(x);
            return f;
        };

        int ans = 2;

        for(int i = 0; i < n; i++){
            auto fact = factor(a[i]);
            for(int j : fact){
                mp[j]++;
                if(mp[j] >= 2) ans = 0;
            }
        }
        if(ans == 0){
            cout << 0 << endl; continue;
        }

        for(int i = 0; i < n; i++){
            auto fact1 = factor(a[i]);
            auto fact2 = factor(a[i] + 1);

            for(int j : fact1) mp[j]--;
            for(int j : fact2){
                mp[j]++;
                if(mp[j] >= 2) ans = 1;
            }
            for(int j : fact2) mp[j]--;
            for(int j : fact1) mp[j]++;
        }

        cout << ans << endl;
    }
    
    return 0;
}