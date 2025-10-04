#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 203;
vector<int> g[N];
int col[N];
bool vis[N];
int ok;
void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else{
            if(col[v] == col[u]){
                ok = 0;
            }
        }
    }
}
int32_t main()
{   
    opt();
    
    int n; 
    while(cin >> n and n != 0){
        int m; cin >> m;
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        ok = 1;
        dfs(0);
        if(ok) cout << "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl;
        for(int i = 0; i < n; i++){
            g[i].clear();
        }
        fill(vis, vis + n, false);
        fill(col, col + n, 0);
    }
    
    return 0;
}