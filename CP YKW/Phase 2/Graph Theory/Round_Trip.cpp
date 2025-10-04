#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
#define endl "\n"

const int N = 1e5+3;
vector<int> g[N], cycle;
int par[N];
bool vis[N];
bool found;
void dfs(int u, int p){
    vis[u] = 1;
    par[u] = p;
    for(auto v : g[u]){
        if(found) return;
        if(!vis[v]){
            dfs(v, u);
        }
        else if(v != p){ // Found a cycle
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
int32_t main()
{   
    opt();
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, 0);
            if(found){
                cout << cycle.size() << endl;
                for(auto u : cycle) cout << u << " ";
                cout << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}