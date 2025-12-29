#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 4;
int n, m, dis[N];
vector<int> g[N];
bool vis[N];

int dfs(int u){
    vis[u] = 1;
    int ans = 0;
    for(auto v : g[u]){
        if(!vis[v]){
            ans = max(ans, dfs(v) + 1);
        }
        else ans = max(ans, dis[v] + 1);
    }
    return dis[u] = ans;
}

int main()
{   
    cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    }
    memset(dis, -1, sizeof dis);
    int ans = 1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) ans = max(ans, dfs(i)); 
    }

    cout << ans ;

    return 0;
}