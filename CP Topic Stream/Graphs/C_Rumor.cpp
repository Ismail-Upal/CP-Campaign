#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 5;
vector<int> g[N], tk(N);
bool vis[N];
int dfs(int u, int p){
    vis[u] = 1;
    int ans = tk[u];
    for(auto v : g[u]){
        if(v != p and !vis[v]){
            ans = min(ans, dfs(v, u));
        }
    }

    return ans;
}
int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> tk[i];

    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            ans += dfs(i, 0);
        }
    }
    cout << ans;
    
    return 0;
}