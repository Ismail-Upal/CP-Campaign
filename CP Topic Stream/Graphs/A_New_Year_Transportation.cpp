#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 3e4 + 5;
vector<int> g[N];
bool vis[N];
void dfs(int u, int p){
    vis[u] = 1;
    for(auto v : g[u]){
        if(v != p){
            dfs(v, u);
        }
    }
}
int main()
{   
    opt();
    
    int n, t; cin >> n >> t;
    for(int i = 1; i < n; i++){
        int u; cin >> u;
        int v = i + u;
        g[i].push_back(v);
    }
    dfs(1, 0);
    if(vis[t]) cout << "YES";
    else cout << "NO";
    
    return 0;
}