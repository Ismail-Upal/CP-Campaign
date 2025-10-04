#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
vector<int> g[N], cycle, par(N);
bool vis[N], found;
void dfs(int u, int p){
    vis[u] = 1;
    par[u] = p;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v, u);
            if(found) return;
        }
        else{
            if(v != p){
                found = 1;
                int cur = u;
                while(u != v){
                    cycle.push_back(u);
                    u = par[u];
                }
                cycle.push_back(v);
                cycle.push_back(cur);
                return;
            }
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
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, 0);
            if(found) break;
        }
    }
    
    if(found){
        cout << cycle.size() << endl;
        for(int i : cycle) cout << i << " ";
    }
    else cout << "IMPOSSIBLE";
    
    return 0;
}