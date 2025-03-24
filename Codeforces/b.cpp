#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 104;
const int INF = 1e18;
ll d[N][N];
int32_t main()
{   
    opt();
    
    ll n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }

    for(int i = 0; i < m; i++){
        ll u, v, w; cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][k]+d[k][j]< d[i][j]){
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }

    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        if(d[a][b] == INF) cout << -1 << endl;
        else cout << d[a][b] << endl;
    }
    
    return 0;
}