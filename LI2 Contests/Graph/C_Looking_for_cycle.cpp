#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 5;
vector<int> g[N], col(N), par(N);
bool found;
int cycle_start, cycle_end;

void dfs(int u){
    col[u] = 1;
    for(auto v : g[u]){
        if(!col[v]){
            par[v] = u;
            dfs(v);
            if(found) return;
        }
        else if(col[v] == 1){
            found = true;
            cycle_start = v;
            cycle_end = u;
            return;
        }
    }
    col[u] = 2;
}

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    }

    cycle_start = -1;
    for(int i = 1; i <= n; i++){
        if(!col[i]){
            dfs(i);
            if(found) break;
        }
    }

    if(found){
        cout << "YES" << endl;

        vector<int> cycle;
        cycle.push_back(cycle_start);
        for(int v = cycle_end; v != cycle_start; v = par[v]){
            cycle.push_back(v);
        }
        // cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());
        
        for(int v : cycle) cout << v << " " ;
    }
    else cout << "NO" << endl;
    
    
    return 0;
}