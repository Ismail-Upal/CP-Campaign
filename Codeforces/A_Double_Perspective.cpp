#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
struct DSU {
    vector<int> par, Size, Rank;

    DSU(int n) {
        par.resize(n + 1);
        Size.assign(n + 1, 1);
        Rank.assign(n + 1, 0);
        for(int i = 0; i <= n; i++) par[i] = i; 
    }

    int find(int u) {
        if(u == par[u]) return u;
        return par[u] = find(par[u]);
    }

    bool unite(int u, int v) {
        u = find(u);
        v = find(v);
        if(u == v) return false;
        if(Size[u] < Size[v]) swap(u, v);
        par[v] = u;
        Size[u] += Size[v];
        // if(Rank[u] < Rank[v]) swap(u, v);
        // par[v] = u;
        // if(Rank[u] == Rank[v]) Rank[u]++;
        return true;
    }
};

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        DSU dsu(2 * n);
        vector<int> ans;
        for(int i = 1; i <= n; i++){
            int u, v; cin >> u >> v;
            if(dsu.unite(u, v)){
                ans.push_back(i);
            }
        }
        cout << ans.size() << endl;
        for(int i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}
