#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 504, inf = 1e18;
ll d[N][N];

void Solve(){
    ll n, m, q; cin >> n >> m >> q;

    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            if(i == j) d[i][j] = 0;
            else d[i][j] = inf;
        }
    }

    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
        d[v][u] = min(d[v][u], w);
    }

    for(ll k = 1; k <= n; k++){
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                if(d[i][k] + d[k][j] < d[i][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    while(q--){
        ll u, v; cin >> u >> v;
        if(d[u][v] == inf) cout << -1 << endl;
        else cout << d[u][v] << endl;
    }
}

int main()
{   
    fast;
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}