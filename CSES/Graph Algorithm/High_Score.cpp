#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll inf = LLONG_MIN / 2;
struct edge{
    ll u, v, w;
};

void Solve(){
    ll n, m; cin >> n >> m;

    vector<ll> g[n + 1];
    vector<edge> edges;
    while(m--){
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].push_back(v);
        edges.push_back({u, v, w});
    }
    
    vector<ll> dis(n + 1, inf);
    dis[1] = 0;

    set<ll> cycle_nodes;

    for(ll i = 1; i <= n; i++){
        for(const auto& e : edges){
            ll u = e.u, v = e.v, w = e.w;
            if(dis[u] != inf and dis[u] + w > dis[v]){
                dis[v] = dis[u] + w;
                if(i == n) cycle_nodes.insert(v);
            }
        }
    }

    vector<bool> vis(n + 1, 0);
    queue<int> q;

    for(auto i : cycle_nodes){
        q.push(i);
        vis[i] = 1;
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : g[u]){
            if(!vis[v]){
                vis[v] = 1;
                q.push(v);
            }
        }
    }

    if(vis[n]) cout << -1;
    else cout << dis[n];
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}