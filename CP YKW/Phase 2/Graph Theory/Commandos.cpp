#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 111;
vector<int> g[N];
int n, m; 
auto bfs(int u){
    vector<int> dis(n, -1);
    vector<bool> vis(n, false); 
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    dis[u] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = true;
                dis[v] = dis[u] + 1;
            }
        }
    }
    return dis;
}

int32_t main()
{   
    opt();
    
    tc{
        cin >> n >> m;
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int s, d; cin >> s >> d;

        auto ds = bfs(s);
        auto dd = bfs(d);

        int ans = 0;
        for(int i = 0; i < n; i++){
            int time = ds[i] + dd[i];
            ans = max(time, ans);
        }
        cout << "Case " << _ << ": " << ans << endl;
        for(int i = 0; i < n; i++){
            g[i].clear();
        }
    }
    
    return 0;
}