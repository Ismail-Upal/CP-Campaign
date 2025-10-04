#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5+4;
vector<int> g[N];
int dep[N];
void dfs(int u, int p = 0){
    dep[u] = dep[p] + 1;
    for(auto v : g[u]){
        if(v != p){
            dfs(v, u);
        }
    }
}
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    int red = 0, blu = 0;
    for(int i = 1; i <= n; i++){
        if(dep[i] % 2) red ++;
        else blu ++;
    }
    cout << 1LL * red * blu - (n - 1) << endl;

    return 0;
}