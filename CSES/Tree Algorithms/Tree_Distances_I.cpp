#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 5;
vector<int> g[N];
int dep[N];
int far1, far2, mx;

void dfs1(int u, int p){
    for(auto v : g[u]){
        if(v != p){
            dep[v] = dep[u] + 1;
            if(dep[v] > mx){
                mx = dep[v];
                far1 = v;
            }
            dfs1(v, u);
        }
    }
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

    dfs1(1, 0);
    memset(dep, 0, sizeof dep);

    return 0;
}