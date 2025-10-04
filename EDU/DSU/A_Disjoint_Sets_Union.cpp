#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
int par[N], Rank[N];

void make(int u){
    par[u] = u;
}

int find(int u){
    if(u == par[u]) return u;
    return par[u] = find(par[u]);
}

void Union(int u, int v){
    u = find(u);
    v = find(v);
    if(u != v){
        if(Rank[u] < Rank[v]) swap(u, v);
        par[v] = u;
        if(Rank[u] == Rank[v]) Rank[u]++;
    }
}

int32_t main()
{   
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) make(i);

    while(m--){
        string s; cin >> s;
        int u, v; cin >> u >> v;
        if(s == "union"){
            Union(u, v);
        }
        else{
            if(find(u) == find(v)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}