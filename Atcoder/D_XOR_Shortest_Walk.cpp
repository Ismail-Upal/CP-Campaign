#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 1e3 + 3;
vector<pair<ll, ll>> g[N];
ll dis[N];

struct cmp{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b){
        return a.second < b.second;
    }
};

void dijkstra(ll src){
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    fill(dis, dis + N, LONG_LONG_MAX);
    pq.push({src, 0});
    dis[src] = 0;

    while(!pq.empty()){
        auto par = pq.top(); pq.pop();
        ll u = par.first;
        ll u_w = par.second;
        for(auto child : g[u]){
            ll v = child.first;
            ll w = child.second;
            if((u_w ^ w) < dis[v]){
                dis[v] = (u_w ^ w);
                pq.push({v, dis[v]});
            }
        }
    }
}

int32_t main()
{   
    opt();
    
    ll n, m; cin >> n >> m;
    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    dijkstra(1);
    if(dis[n] != LONG_LONG_MAX) cout << dis[n];
    else cout << -1 ;
    
    return 0;
}