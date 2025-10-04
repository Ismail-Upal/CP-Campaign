#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 3e4 + 3;
vector<pair<int, int>> g[N];
int d[N];
int mx, node, ans;
void dfs1(int u, int p, int w){
    d[u] = d[p] + w;
    if(d[u] > mx){
        mx = d[u];
        node = u;
    }
    for(auto [v, w] : g[u]){
        if(v != p){
            dfs1(v, u, w);
        }
    }
} 
void dfs2(int u, int p, int w){
    d[u] = d[p] + w;
    ans = max(ans, d[u]);
    for(auto [v, w] : g[u]){
        if(v != p){
            dfs2(v, u, w);
        }
    }
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        for(int i = 1; i < n; i++){
            int u, v, w; cin >> u >> v >> w;
            u++; v++;
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }
        dfs1(1, 0, 0);
        dfs2(node, 0, 0);

        cout << ans << endl;

        for(int i = 1; i <= n; i++){
            g[i].clear();
            d[i] = 0;
        }
        mx = node = ans = 0;
    }
    
    return 0;
}