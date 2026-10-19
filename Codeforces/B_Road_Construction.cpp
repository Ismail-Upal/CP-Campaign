#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e3 + 3;
bool bad[N][N], vis[N];
vector<int> g[N];

void Solve(){
    int n, m; cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        bad[u][v] = 1;
        bad[v][u] = 1;
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i != j and !bad[i][j]){
                g[i].push_back(j);
            }
        }
    }

    int s = 1;
    for(int i = 1; i <= n; i++){
        if(sz(g[i]) > sz(g[s])) s = i;
    }

    vector<pair<int, int>> ans;
    vis[s] = 1;
    for(auto u : g[s]){
        ans.push_back({s, u});
        vis[u] = 1;
    }

    cout << sz(ans) << endl;
    for(auto [u, v] : ans) cout << u << " " << v << endl;
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