#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6;
vector<int> g[N];
vector<int> dfs_end_time_ord;
bool vis[N];
void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
    dfs_end_time_ord.push_back(u);
}
int32_t main()
{   
    opt();
    
    int n, m;
    while(cin >> n >> m and !(n == 0 and m == 0)){
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        reverse(dfs_end_time_ord.begin(), dfs_end_time_ord.end());
        for(auto x : dfs_end_time_ord) cout << x << " ";
        cout << endl;
        fill(vis, vis + n + 1, 0);
        for(int i = 1; i <= n; i++) g[i].clear();
        dfs_end_time_ord.clear();
    }
    
    return 0;
}