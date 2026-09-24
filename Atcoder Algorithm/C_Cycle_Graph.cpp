#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
bool vis[N];
vector<int> g[N];
void dfs(int u){
    if(sz(g[u]) != 2) return;
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
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
    

    dfs(1);
    int ok = 1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            ok = 0; break;
        }
    }

    if(ok) cout << "Yes" ;
    else cout << "No";
    
    return 0;
}