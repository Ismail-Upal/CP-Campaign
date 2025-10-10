#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;
vector<int> g[N];
bool vis[N];
int n, m, k; 

void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main()
{   
    opt();
    
    tc{
        cin >> n >> m >> k;
        while(m--){
            int u, v; cin >> u >> v ;
            g[u].push_back(v);
        }
        vector<int> citi;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                dfs(i);
                
            }
        }
    }
    
    return 0;
}