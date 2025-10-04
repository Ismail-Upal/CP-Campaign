#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 104;
vector<pair<int, int>> g[N];
bool vis[N];
ll n, cost = 0;
void dfs(int u, int p = 0){
    vis[u] = true;
    for(auto [v, w] : g[u]){
        if(!vis[v]){
            cost += w;
            dfs(v, u);
        }
        else if(v == 1 and p != 1){
            cost += w;
        }
    }
}
int32_t main()
{   
    opt();
    
    cin >> n ;
    ll total_cost = 0;
    for(int i = 0; i < n; i++){
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, 0});
        g[v].push_back({u, w});
        total_cost += w;
    }
    dfs(1);
    cout << min(cost, total_cost - cost) << endl;
    
    return 0;
}