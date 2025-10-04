#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e3 + 2;
vector<int> g[N];
bool vis[N];
int present[N], p[N];
void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            present[v] ++;
            dfs(v);
        }
    }
}
int32_t main()
{   
    opt();
    
    tc{
        int k, n, m; cin >> k >> n >> m;
        for(int i = 1; i <= k; i++) cin >> p[i];
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
        }
        for(int i = 1; i <= k; i++){
            present[p[i]]++;
        }
        for(int i = 1; i <= k; i++){
            fill(vis, vis + n + 1, false);
            dfs(p[i]);
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(present[i] == k) ans++;
        }
        cout << "Case " << _ << ": " << ans << endl;

        for(int i = 1; i <= n; i++) g[i].clear();
        fill(present, present + n + 1, 0);
        fill(vis, vis + n + 1, false);
    }
    
    return 0;
}