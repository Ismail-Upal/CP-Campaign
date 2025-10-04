#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 105;
vector<int> g[N];
int indeg[N], outdeg[N];
int32_t main()
{   
    opt();
    int n, m; cin >> n >> m;
    while(m--){
        int u, v, w; cin >> u >> v >> w; // w = weight
        g[u].push_back(v);
        g[v].push_back(u);
        indeg[v]++; // for Directed graph
        outdeg[u]++;
    }
    for(auto i : g[2]) cout << i << ' ';

    // degrees
    for(int i = 1; i <= n; i++) cout << g[i].size() << ' ';
    
    return 0;
}