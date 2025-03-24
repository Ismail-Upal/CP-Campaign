#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool vis[N];
queue<int> q;
void bfs(int u){
    vis[u] = true;
    q.push(u);
    cout << u << " ";
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
                cout << v << " ";
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
    bfs(1);
    
    return 0;
}