#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
int dis[N], parent[N];
vector<pair<int, int>> g[N];

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

void dijkstra(int u){
    dis[u] = 0;
    pq.push({0, u});

    while(!pq.empty()){
        auto par = pq.top(); pq.pop();

        int u = par.second;
        int u_w = par.first;
        for(auto child : g[u]){
            int v = child.first;
            int w = child.second;

            if(u_w + w < dis[v]){
                dis[v] = u_w + w;
                parent[v] = u;
                pq.push({dis[v], v});
            }
        }
    }
}

void path(int u){
    vector<int> pathh;
    while(u != -1){
        pathh.push_back(u);
        u = parent[u];
    }
    reverse(pathh.begin(), pathh.end());
    for(int i : pathh){
        char c = char('a' + i - 1) ;
        if(c == 'h') c = 'z';
        cout << c << " ";
    }
}

int32_t main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v, w; cin >> u >> v >> w; 
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    fill(dis, dis + n + 1, INT_MAX);
    fill(parent, parent + n + 1, -1);
    dijkstra(1);

    for(int i = 1; i <= n; i++){
        cout << char('a' + i - 1) << " -> " << dis[i] << "  path : " ; path(i); 
        cout << endl;
    }  

    
    return 0;
}

// node a = 1 , b = 2 ... h = 8