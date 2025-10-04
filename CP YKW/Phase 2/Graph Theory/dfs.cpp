#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

const int N = 1e5 + 3;
vector<int> g[N];
bool vis[N];

void dfs(int u){
    // take action on vertex after entering the vertex
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            // take action on child before entering the child node
            dfs(v);
            // take action on child after exiting child node
        }
    }
    // take action on vertex before exiting the vertex
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
    // dfs(1);
    // for(int i = 1; i <= n; i++){
    //     if(!vis[i]){
    //         cout << "Disconnected graph" << endl;
    //         return 0;
    //     }
    // }
    // cout << "Connected graph" << endl;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            ans++;
        }
    }
    cout << "Connected Components : " << ans << endl;
    return 0;
}