#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;
int n, k;
vector<int> g[N];
bool vis[N], ok;
int col[N];
void dfs(int u){
    vis[u] = true;
    for(auto v : g[u]){
        if(!vis[v]){
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else{
            if(col[u] == col[v]){
                ok = false;
            }
        }
    }
}
int32_t main()
{   
    opt();
    
    cin >> n >> k;
    for(int i = 1; i <= n - 1; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ok = true;
    dfs(1);
    if(k == 1 and n > 1){
        cout << -1 << endl; 
        return 0;
    }
    int zro = 0, one = 0;
    for(int i = 1; i <= n; i++){
        if(col[i] == 0) zro++;
        else one++;
    }
    if(zro > one) cout << (one * 2) + zro << endl;
    else cout << (zro * 2) + one << endl;

    return 0;
}