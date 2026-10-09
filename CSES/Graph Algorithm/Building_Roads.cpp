#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];

void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
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

    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            v.push_back(i);
        }
    }

    cout << sz(v) - 1 << endl;
    for(int i = 1; i < sz(v); i++){
        cout << v[0] << " " << v[i] << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}