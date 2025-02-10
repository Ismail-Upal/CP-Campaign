#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            v[i]--;
        }
        string s; cin >> s;
        vector<int> ans(n), vis(n);
        for(int i = 0; i < n; i++){
            if(vis[i]) continue;
            int u = i, cnt = 0;
            vector<int> path;
            while(!vis[u]){
                vis[u] = 1;
                path.push_back(u);
                if(s[u] == '0') cnt++;
                u = v[u];
            }
            for(auto v : path){
                ans[v] = cnt;
            }
        }
        for(int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << endl;
    }
    
    return 0;
}