#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
vector<pair<int, int>> g[N];
bool vis[N];
int edge_used = 0;

int prim(int src){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src}); // {w, u}

    int cost = 0;
    while(!pq.empty()){
        auto [w, u] = pq.top(); pq.pop();
        if(vis[u]) continue;
        
        vis[u] = 1;
        cost += w;
        edge_used++;

        for(auto [v, w] : g[u]){
            if(!vis[v]) pq.push({w, v});
        }
    }

    return cost;
}

int main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
     
    int cost = prim(1);

    if(edge_used == n) cout << cost ;
    else cout << "IMPOSSIBLE" ;
    
    return 0;
}