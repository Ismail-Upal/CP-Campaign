#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];
int par[N];
bool found;
vector<int> cycle;

void dfs(int u, int p){
    vis[u] = 1;
    par[u] = p;
    for(auto v : g[u]){
        if(found) return;
        if(!vis[v]){
            dfs(v, u);
            if(found) return;
        }
        else if(v != p){
            found = 1;
            int cur = u;
            while(u != v){
                cycle.push_back(u);
                u = par[u];
            }
            cycle.push_back(v);
            cycle.push_back(cur);
            return;
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

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, -1);
        }
    }

    if(!found){
        cout << "IMPOSSIBLE"; return;
    }
    cout << sz(cycle) << endl;
    for(auto i : cycle) cout << i << " ";
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