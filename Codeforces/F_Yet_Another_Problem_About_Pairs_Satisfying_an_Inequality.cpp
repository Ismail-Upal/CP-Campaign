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
        int n; cin >> n;
        vector<pair<int, int>> v;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x < i) v.push_back({i, x});
        }
        map<int, ll> mp;
        for(auto i : v) mp[i.first] = 1;
        for(int i = 2; i <= n; i++){
            mp[i] += mp[i - 1];
        }

        ll ans = 0;
        for(int i = sz(v) - 1; i > 0; i--){
            int a = v[i].second;
            ans += mp[a - 1];
        }
        cout << ans << endl;
    }
    
    return 0;
}