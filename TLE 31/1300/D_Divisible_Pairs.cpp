#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, x, y; cin >> n >> x >> y;
        vector<int> v(n);
        map<pair<int, int>, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            int sum = v[i] % x;
            int sub = v[i] % y;
            mp[{sum, sub}]++;
            // cout << sum << " " << sub << endl;
        }
        // cout << endl;

        ll ans = 0;
        for(int i = 0; i < n; i++){
            int sum = (x - (v[i] % x)) % x;
            int sub = v[i] % y;
                
            // cout << sum << " " << sub << endl;

            if(mp[{sum, sub}] > 0){
                if(sum == (v[i] % x)) ans += mp[{sum, sub}] - 1;
                else ans += mp[{sum, sub}];
            }

            mp[{(v[i] % x), (v[i] % y)}]--;
        }
        cout << ans << endl;
    }
    
    return 0;
}