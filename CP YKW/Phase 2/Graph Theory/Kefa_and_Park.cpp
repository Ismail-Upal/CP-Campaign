#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 4;
int n, m; 
vector<int> g[N];
vector<int> cat(N);
int ans;
int cons_cat[N];
void dfs(int u, int p){
    if(cat[u] != 1) cons_cat[u] = 0;
    else{
        cons_cat[u] = cons_cat[p] + 1;
    }
    if(cons_cat[u] > m) return;
    bool leaf = true;
    for(auto v : g[u]){
        if(v != p){
            leaf = false;
            dfs(v, u);
        }
    }
    if(leaf)ans++;
}
int32_t main()
{   
    opt();
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> cat[i];
    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << ans << endl;
    
    return 0;
}