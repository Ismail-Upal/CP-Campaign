#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6;
vector<int> g[N];
bool vis[N], ok;
int col[N];
void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else{
            if(col[u] == col[v]){
                ok = 0;
            }
        }
    }
}
int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ok = 1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) dfs(i);
    }

    if(ok){
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++){
            if(!col[i]) cout << 1 << " " ;
            else cout << 2 << " " ; 
        }
    }
    else cout << "NO" << endl;
    
    return 0;
}