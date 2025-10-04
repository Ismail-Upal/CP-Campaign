#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e6;
vector<int> g[N];
bool vis[N], ok;
int col[N];

void dfs(int u){
    vis[u] = true;
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else{
            if(col[u] == col[v]){
                ok = false;
            }
        }
    }
}
int32_t main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ok = true;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) dfs(i);
    }
    if(ok) cout << "Bipartite" ;
    else cout << "not bipartite" ;
    
    return 0;
}