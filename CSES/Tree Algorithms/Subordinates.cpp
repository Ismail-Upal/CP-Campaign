#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
vector<int> g[N], dis(N);
bool vis[N];

void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
            dis[u] += 1 + dis[v];
        }
    }
}

int main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        int u; cin >> u;
        g[i].push_back(u);
        g[u].push_back(i);
    }
    dfs(1);
    for(int i = 1; i <= n; i++) cout << dis[i] << " " ;
    
    return 0;
}