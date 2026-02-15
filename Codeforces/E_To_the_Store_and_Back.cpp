#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, m; cin >> n >> m;
    vector<ll> g[n + 3], x(m), y(m);
    for(ll i = 0; i < m; i++){
        cin >> x[i];
    }
    for(ll i = 0; i < m; i++){
        cin >> y[i];
        g[x[i]].push_back(y[i]);
    }

    string s; cin >> s;
    ll src; cin >> src;

    if(s[src - 1] == '1'){
        cout << 0 ;
        return 0;
    }

    ll dis[n + 3]; memset(dis, -1, sizeof dis);
    bool vis[n + 3]; memset(vis, 0, sizeof vis);

    queue<ll> q; 
    q.push(src);
    vis[src] = 1, dis[src] = 0;

    while(!q.empty()){
        ll u = q.front(); q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = 1;
                dis[v] = dis[u] + 1;
            }
        }
    }

    for(ll i = 1; i <= n; i++) g[i].clear();
    for(ll i = 0; i < m; i++) g[y[i]].push_back(x[i]);

    queue<ll> q2;
    q2.push(src);
    ll dis2[n + 3]; memset(dis2, -1, sizeof dis2);
    memset(vis, 0, sizeof vis);
    vis[src] = 0, dis2[src] = 0;

    while(!q2.empty()){
        ll u = q2.front(); q2.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q2.push(v);
                vis[v] = 1;
                dis2[v] = dis2[u] + 1;
            }
        }
    }

    // for(ll i = 1; i <= n; i++) cout << dis2[i] << " " ;
    
        ll ans = 1e9;
        for(ll i = 0; i < n; i++){
            if(s[i] == '1' and dis[i + 1] != -1 and dis2[i + 1] != -1){
                ans = min(ans, dis2[i + 1] + dis[i + 1]);
            }
        }

        if(ans == 1e9) ans = -1;
        cout << ans ;
    
    
    return 0;
}