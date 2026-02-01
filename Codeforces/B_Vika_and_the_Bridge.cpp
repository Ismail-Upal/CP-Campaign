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
        int n, k; cin >> n >> k;
        vector<int> v(n + 2);
        map<int, vector<int>> mp;
        map<int, vector<int>> div;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        int ans = 1e9;

        for(int i = 1; i <= k; i++){
            mp[i].push_back(n + 1);
            auto vec = mp[i];
            int cur = 0;
            for(auto j : vec){
                div[i].push_back(j - cur - 1);
                cur = j;
            }
            sort(div[i].begin(), div[i].end());
            div[i].back() /= 2;
            sort(div[i].begin(), div[i].end());
        }

        for(int i = 1; i <= k; i++){
            ans = min(ans, div[i].back());
        }
        cout << ans << endl;
    }
    
    return 0;
}