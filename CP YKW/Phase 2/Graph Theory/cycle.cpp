#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e6 ;
vector<int> g[N];
int col[N], par[N];
bool cycle;

void dfs(int u){
    col[u] = 1;
    for(auto v : g[u]){
        if(col[v] == 0){
            par[v] = u;
            dfs(v);
        }
        else if(col[v] == 1){
            cycle = true;
            // you can track the cycle using par cycle
        }
    }
    col[u] = 2;
}
int32_t main()
{   
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    }
    cycle = false;
    for(int i = 1; i <= n; i++){
        if(!col[i]){
            dfs(1);
        }
    }
    cout << (cycle ? "YES\n" : "NO\n");

    // if has cycle : printing cycle : 
    if(cycle){
        for(int i = 1; i <= n; i++) cout << par[i] << ' ';
    }

    return 0;
}