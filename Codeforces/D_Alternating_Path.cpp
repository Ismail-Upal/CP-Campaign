#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 5;
vector<int> g[N];
bool vis[N], ok;
int col[N], mark[2];

void dfs(int u){
    vis[u] = 1;
    mark[col[u]]++;
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else{
            if(col[u] == col[v]) ok = 0;
        }
    }
}

void Solve(){
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        ok = 1;
        mark[0] = mark[1] = 0;
        if(!vis[i]){
            dfs(i);
            if(ok) cnt += max(mark[0], mark[1]);
        }
    }
    cout << cnt << endl;


    for(int i = 1; i <= n; i++){
        g[i].clear();
        vis[i] = 0;
        col[i] = 0;
    }
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}