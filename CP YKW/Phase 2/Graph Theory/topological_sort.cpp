#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

const int N = 1e6;
vector<int> g[N];
int indeg[N];
bool vis[N];
int32_t main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    vector<int> z;
    for(int i = 1; i <= n; i++){
        if(indeg[i] == 0){
            z.push_back(i);
            vis[i] = true;
        }
    }
    vector<int> ans;
    while(ans.size() < n){
        if(z.empty()){
            cout << "Impossible" << endl;
            return 0;
        }
        int cur = z.back();
        z.pop_back();
        ans.push_back(cur);
        for(auto v : g[cur]){
            indeg[v]--;
            if(!vis[v] and indeg[v] == 0){
                z.push_back(v);
                vis[v] = true;
            }
        }
    }
    for(auto x : ans) cout << x << ' ';
    
    return 0;
}