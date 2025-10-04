#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 133;
vector<int> g[N];
int dis[N];
bool vis[N];
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
                vis[v] = 1;
                dis[v] = dis[u] + 1;
            }
        }
    }
}
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int u, m; cin >> u >> m;
        while(m--){
            int v; cin >> v;
            g[u].push_back(v);
        }
    }
    fill(dis, dis + n + 1, -1);
    bfs(1);

    for(int i = 1; i <= n; i++){
        cout << i << " " << dis[i] << endl;
    }
    
    return 0;
}