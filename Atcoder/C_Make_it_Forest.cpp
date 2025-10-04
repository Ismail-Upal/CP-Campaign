#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 +4;
vector<int> g[N];
bool vis[N];
void dfs(int u){
    vis[u] = 1;
    for(int v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int32_t main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int com = 0;

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            com++;
            dfs(i);
        }
    }

    cout << m - (n - com) ;
    
    return 0;
}