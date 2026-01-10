#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
vector<int> g[N];
int depth[N];
int node, mx, ans;

void dfs1(int u, int p){

    for(auto v : g[u]){
        if(v != p){
            depth[v] = depth[u] + 1;
            if(depth[v] > mx){
                mx = depth[v];
                node = v;
            }
            dfs1(v, u);
        }
    }
}
void dfs2(int u, int p){
    for(auto v : g[u]){
        if(v != p){
            depth[v] = depth[u] + 1;
            ans = max(ans, depth[v]);
            dfs2(v, u);
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
    memset(depth, 0, sizeof depth);
    dfs2(node, 0);

    cout << ans << endl;
    
    return 0;
}