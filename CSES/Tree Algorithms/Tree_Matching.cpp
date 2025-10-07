#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
vector<int> g[N];
bool vis[N];

int dfs(int u){
    vis[u] = 1;
    int sum = 0;
    for(auto v : g[u]){
        if(!vis[v]){
            sum += dfs(v);
        }
    }

    return sum;
}

int main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << dfs(1);
    
    return 0;
}