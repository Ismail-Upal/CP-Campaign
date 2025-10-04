#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];
void dfs(int u){
    vis[u] = true;
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
    int ans = 0;
    vector<int> link;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            link.push_back(i);
            dfs(i);
            ans++;
        }
    }
    cout << ans - 1 << endl;
    for(int i = 0; i < sz(link) - 1; i++){
        cout << link[i] << ' ' << link[i + 1] << endl;
    }
    return 0;
}