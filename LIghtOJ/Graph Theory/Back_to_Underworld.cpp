#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'

const int N = 2e4 + 4;
vector<vector<int>> g;
vector<int> col, vis;

void dfs(int u, int &zro, int &one){
    vis[u] = 1;
    
    if(col[u] == 0) zro++;
    else one++;
    
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v, zro, one);
        }
    }
}

void Solve(){
    g.assign(N, {});
    col.assign(N, 0);
    vis.assign(N, 0);

    int n; 
    cin >> n;
    set<int> node;
    
    while(n--){
        int u, v; 
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        node.insert(u);
        node.insert(v);
    }

    int ans = 0;
    for(auto u : node){
        if(!vis[u]){
            int zro = 0, one = 0;
            dfs(u, zro, one); 
            ans += max(zro, one); 
        }
    }

    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        Solve();
    }
    
    return 0;
}