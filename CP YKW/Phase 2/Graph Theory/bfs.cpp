#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 3;
vector<int> g[N]; 
bool vis[N];
int dis[N], par[N];

void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    dis[u] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = true;
                dis[v] = dis[u] + 1;
                par[v] = u;
            }
        }
    }
}

vector<int> path(int v) {
    vector<int> ans;
    if (!vis[v]) return ans;

    while (v != 0) { 
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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

    for(int i = 1; i <= n; i++){    // shortest dis from src node
        cout << dis[i] << " ";
    }
    
    int v = 4;  // Shortest path from src (1) to v (4)
    vector<int> shortest_path = path(v);
    
    if (shortest_path.empty()) 
        cout << "No path to node " << v << endl;
    else {
        cout << "Shortest path to node " << v << ": ";
        for (int node : shortest_path) 
            cout << node << " ";
        cout << endl;
    }

    return 0;
}