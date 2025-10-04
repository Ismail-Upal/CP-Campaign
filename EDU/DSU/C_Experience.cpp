#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 +3 ;
int par[N], point[N], Size[N], add[N], inc[N];

void make(int u){
    par[u] = u;
    Size[u] = 1;
}

int find(int u){
    if(u == par[u]) return u;
    int root = find(par[u]);
    add[u] += 
    return root;
}

void Union(int u, int v){
    u = find(u); v = find(v);

    if(u != v){
        if(Size[u] < Size[v]) swap(u, v);
        par[v] = u;
        Size[u] += Size[v];
    }
}

int32_t main()
{   
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) make(i);
    
    while(m--){
        string s; cin >> s;
        if(s == "join"){
            int u, v; cin >> u >> v;
            Union(u, v);
        }
        else if(s == "add"){
            int u, x; cin >> u >> x;
            int lead = find(u);
            Add[lead] += x;
        }
        else{
            int u; cin >> u;
            cout << point[u] << endl;
        }
    }
    
    return 0;
}