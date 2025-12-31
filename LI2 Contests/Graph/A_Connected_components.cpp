#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 5;
vector<int> g[N], vis(N);

void dfs(int u, int c){
    vis[u] = c;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v, c);
        }
    }
}

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int c = 1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, c);
            c++;
        }
    }
    cout << c - 1 << endl;
    for(int i = 1; i <= n; i++) cout << vis[i] << " " ;
    
    return 0;
}