#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

map<string, vector<string>> g;
map<string, int> col;
bool cycle;

void dfs(const string& u){
    col[u] = 1;

    for(auto &v : g[u]){
        if(col[v] == 0){
            dfs(v);
        }
        else if(col[v] == 1){
            cycle = 1;
            return;
        }
    }

    col[u] = 2;
}

void Solve(){
    g.clear();
    col.clear();

    int n; cin >> n;
    
    while(n--){
        string u, v; cin >> u >> v;
        g[u].push_back(v);
        col[u] = 0;
        col[v] = 0;
    }

    for(auto& [u, c] : col){
        cycle = 0;
        if(col[u] == 0) dfs(u);
        if(cycle){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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