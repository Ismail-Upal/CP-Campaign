#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 4;
vector<int> g[N], col(N), vis(N);
int ok;
void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else{
            if(col[u] == col[v]) ok = 0;
        }
    }
}

int main()
{   
    int n, m; cin >> n >> m;

    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ok = 1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) dfs(i);
    }
    
    if(!ok) cout << "IMPOSSIBLE";
    else{
        for(int i = 1; i <= n; i++){
            if(col[i] == 0) col[i] = 2;
            cout << col[i] << " ";
        }
    }

    return 0;
}