#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 505, INF = 1e18;
ll d[N][N];

int main()
{   
    ll n, m, q; cin >> n >> m >> q;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }

    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
        d[v][u] = min(d[v][u], w);
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][k] + d[k][j] < d[i][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    while(q--){
        int u, v; cin >> u >> v;
        if(d[u][v] == INF) cout << -1 << endl;
        else cout << d[u][v] << endl; 
    }
    
    return 0;
}