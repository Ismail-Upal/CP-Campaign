#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6 + 3;
vector<int> g[N];
int col[N], par[N];
bool found = false;
int cycle_start, cycle_end;

void dfs(int u) {
    col[u] = 1; // Mark node as visited (processing)
    for (auto v : g[u]) {
        if (col[v] == 0) { // If not visited, continue DFS
            par[v] = u;
            dfs(v);
            if (found) return;
        } 
        else if (col[v] == 1) { // Found a back edge (cycle)
            found = true;
            cycle_end = u;
            cycle_start = v;
            return;
        }
    }
    col[u] = 2; // Mark node as fully processed
}

int32_t main(){   
    opt();
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v); // Directed graph
    }

    found = false;
    cycle_start = -1;
    
    for(int i = 1; i <= n; i++){
        if(!col[i]) {
            dfs(i);
            if(found) break;
        }
    }

    if(found){
        //cout << "YES\n";

        vector<int> cycle;
        cycle.push_back(cycle_start);
        for (int v = cycle_end; v != cycle_start; v = par[v]) {
            cycle.push_back(v);
        }
        cycle.push_back(cycle_start); // Closing the cycle
        reverse(cycle.begin(), cycle.end());

        cout << cycle.size() << endl;
        for (int v : cycle) {
            cout << v << " ";
        }
        cout << endl;
    }
    else{
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}