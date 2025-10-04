#include<bits/stdc++.h>
using namespace std;
vector<int> g[105];
int sub_t_sum[105], even[105];
void dfs(int u, int p){
    sub_t_sum[u] += u;
    if(u % 2 == 0) even[u]++;
    for(auto v : g[u]){
        if(v != p){
            dfs(v, u);
            sub_t_sum[u] += sub_t_sum[v];
            even[u] += even[v];
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
    int q; cin >> q;
    while(q--){
        int v; cin >> v;
        cout << sub_t_sum[v] << ' ' << even[v] << endl;
    }
    
    return 0;
}