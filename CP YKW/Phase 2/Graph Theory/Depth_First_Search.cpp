#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 104;
vector<int> g[N];
bool vis[N];
int d[N], f[N], t = 1;
void dfs(int u){
    vis[u] = true;
    d[u] = t;
    t++;
    for(auto v : g[u]){
        if(!vis[v]){
            d[v] = t;
            dfs(v);
        }
    }
    f[u] = t;
    t++;
}
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int n, k; cin >> n >> k;
        while(k--){
            int v; cin >> v;
            g[i].push_back(v);
        }
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]) dfs(i);
    }
    for(int i = 1; i <= n; i++) cout << i << ' ' << d[i] << " " << f[i] << endl;
    
    
    return 0;
}