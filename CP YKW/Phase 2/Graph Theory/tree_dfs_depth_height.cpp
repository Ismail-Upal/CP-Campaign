#include<bits/stdc++.h>
using namespace std;
vector<int> g[105];
int dep[105], height[105];
void dfs(int u, int p){
    for(auto v : g[u]){
        if(v != p){
            dep[v] = dep[u] + 1;
            dfs(v, u);
            height[u] = max(height[u], height[v] + 1);
        }
    }
}
int32_t main()
{   
    int n; cin >> n;    // n nodes (n - 1) edges in tree 
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);

    for(int i = 1; i <= n; i++) cout << dep[i] << " ";
    cout << endl;
    for(int i = 1; i <= n; i++) cout << height[i] << " ";
    
    return 0;
}