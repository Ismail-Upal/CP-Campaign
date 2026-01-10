#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
vector<vector<int>> g(N);
vector<bool> vis(N);
vector<int> dis(N);

int dfs(int u){
    vis[u] = 1;
    dis[u] = 1;
    int node = 0;
    for(auto v : g[u]){
        if(!vis[v]){
            node += dfs(v) + 1;
        }
    }
    return dis[u] = node;
}

int main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        int v; cin >> v;
        g[v].push_back(i);
        g[i].push_back(v);
    }
    dfs(1);

    for(int i = 1; i <= n; i++) cout << dis[i] << " " ;
    
    return 0;
}