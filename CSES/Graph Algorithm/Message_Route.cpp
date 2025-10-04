#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m, dis[N], par[N];
bool vis[N];
vector<int> g[N];

void bfs(int u){
    queue<int> q;
    vis[u] = 1;
    dis[u] = 1, par[u] = -1;
    q.push(u);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = 1;
                dis[v] = dis[u] + 1;
                par[v] = u;
            }
        }
    }
}

int main()
{   
    cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    if(!vis[n]) cout << "IMPOSSIBLE";
    else{
        cout << dis[n] << endl;
        vector<int> ans;
        int x = n;
        while(x != -1){
            ans.push_back(x);
            x = par[x];
        }
        reverse(ans.begin(), ans.end());
        for(auto i : ans) cout << i << " " ;
    }
    
    return 0;
}