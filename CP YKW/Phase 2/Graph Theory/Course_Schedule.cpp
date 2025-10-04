#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif
//-------------------------------------------
const int N = 1e5 + 3;
vector<int> g[N];
int indeg[N];
int32_t main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    queue<int> z;
    for(int i = 1; i <= n; i++){
        if(indeg[i] == 0){
            z.push(i);
        }
    }
    
    vector<int> ord;
    while(!z.empty()){
        int u = z.front();
        z.pop();
        ord.push_back(u);
        for(auto v : g[u]){
            indeg[v]--;
            if(indeg[v] == 0){
                z.push(v);
            }
        }
    }
    if(ord.size() < n) cout << "IMPOSSIBLE" << endl;
    else for(auto i : ord) cout << i << " ";
    
    return 0;
}