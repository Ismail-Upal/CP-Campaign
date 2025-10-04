#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 105;
int g[N][N];
int32_t main()
{   
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    if(g[4][2]) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

