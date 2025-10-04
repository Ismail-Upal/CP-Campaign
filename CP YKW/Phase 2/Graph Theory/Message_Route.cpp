#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 +3;
vector<int> g[N];
bool vis[N];
int par[N];
void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    par[u] = 0;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                par[v] = u;
                vis[v] = 1;
            }
        }
    }
}
vector<int> path(int v){
    vector<int> ans;
    if(!vis[v]) return ans;
    while(v != 0){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
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
    bfs(1);
    
    vector<int> ans = path(n);

    if(ans.empty()) cout << "IMPOSSIBLE" << endl;
    else {
        cout << sz(ans) << endl;
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }

    return 0;
}