#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
map<int, vector<int>> g;
set<int> node;
map<int, bool> vis;
map<int, int> dis;
void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    dis[u] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                dis[v] = dis[u] + 1;
                vis[v] = 1;
            }
        }
    }
}
int32_t main()
{   
    opt();
    
    int n; int cs = 1;
    while(cin >> n){
        if(n == 0) break;
        g.clear();
        node.clear();
        vis.clear(); dis.clear();
        for(int i = 1; i <= n; i++){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            node.insert(u);
            node.insert(v);
        }
        int u, t;
        
        while(cin >> u >> t){
            if(u == 0 and t == 0) break;
            for(auto i : node){
                dis[i] = 1e9;
                vis[i] = false;
            }
            int ans = 0;
            bfs(u);
            for(auto i : node){
                if(dis[i] > t) ans++;
            }
            cout << "Case " << cs << ": " << ans << " nodes not reachable from node " << u << " with TTL = " << t << "." << endl;
            cs ++;
        }
    }
    
    return 0;
}