#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e3 + 3;
vector<int> g[N];
bool vis[N];
int col[N], ok;
void dfs(int u, int c){
    col[u] = c;
    for(auto v : g[u]){
        if(!col[v]){
            if(col[u] == 1) dfs(v, 2);
            else dfs(v, 1);
        }
        else{
            if(col[u] == col[v]) ok = 0;
        }
    }
}
int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        ok = 1;
        for(int u = 1; u <= n; u++){
            int c = 1;
            if(col[u] == 0){
                dfs(u, c);
            }
        }
        if(ok) cout << "Scenario #" << _ << ":" << endl << "No suspicious bugs found!" << endl;
        else cout << "Scenario #" << _ << ":" << endl << "Suspicious bugs found!" << endl;
        fill(vis, vis + n + 1, false);
        fill(col, col + n + 1, 0);
        for(int i = 1; i <= n; i++) g[i].clear();
    }
    
    return 0;
}