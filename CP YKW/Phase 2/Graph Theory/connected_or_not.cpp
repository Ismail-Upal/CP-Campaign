#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e6+3;
vector<int> g[N];

int32_t main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    }
    int q; cin >> q;
    while(q--){
        int u, v; cin >> u >> v;
        if(find(g[u].begin(), g[u].end(), v) != g[u].end()) cout << "YES" << endl;
        else if(u == v) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}