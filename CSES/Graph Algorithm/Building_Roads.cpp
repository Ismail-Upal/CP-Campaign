#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];

void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }    

    vector<int> ans;
    int city = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            ans.push_back(i);
            city++;
        }
    }
    cout << city - 1 << endl;
    for(int i = 1; i < city; i++){
        cout << ans[i - 1] << " " << ans[i] << endl;
    }
    
    return 0;
}