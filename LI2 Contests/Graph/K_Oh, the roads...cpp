#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
struct DSU{
    vector<int> par, Size;
    DSU(int n){
        par.resize(n + 1);
        Size.assign(n + 1, 1);
        for(int i = 1; i <= n; i++) par[i] = i;
    }
    int find(int u){
        if(u == par[u]) return u;
        return par[u] = find(par[u]);
    }
    bool unite(int u, int v){
        u = find(u); 
        v = find(v);
        if(u == v) return false;
        if(Size[u] < Size[v]) swap(u, v);
        par[v] = u;
        Size[u] += Size[v];
        return true;
    }
};

int main()
{   
    opt();
    freopen("roads.in", "r", stdin);
    freopen("roads.out", "w", stdout);
    
    int n, m; cin >> n >> m;
    DSU dsu(n);
    vector<pair<int, int>> edges;
    while(m--){
        int u, v; cin >> u >> v;
        if(dsu.unite(u, v)){
            edges.push_back({u, v});
        }
    }
    cout << edges.size() << endl;
    for(auto [u, v] : edges){
        cout << u << " " << v << endl;
    }

    
    return 0;
}