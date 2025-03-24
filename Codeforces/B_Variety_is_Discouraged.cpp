#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int l = -1, r = -1;
        pair<int, int> ans = {-1, -1};
        for(int i = 0; i < n; i++){
            if(mp[v[i]] == 1 and l == -1) l = i + 1;
            if(mp[v[i]] == 1 and l != -1){
                r = i + 1;
            }
            if(mp[v[i]] > 1) l = -1, r = -1;
            else if (r - l + 1 >= ans.second - ans.first + 1) ans = {l, r};
        }

        if(ans.first == -1 and ans.second == -1) cout << 0 << endl;
        else cout << ans.first << " " << ans.second << endl;
    }
    
    return 0;
}