#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool vis[N];
void dfs(int u){
    vis[u] = true;
    cout << u << " ";
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int32_t main()
{   
    int n, m; cin >> n >> m; // n = nodes, m = edges
    // adjacency list
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    dfs(1); // source = 1
    
    return 0;
}