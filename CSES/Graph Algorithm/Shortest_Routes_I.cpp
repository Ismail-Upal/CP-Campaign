#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 3;
vector<vector<pair<ll, ll>>> g(N);
ll dis[N];
struct cmp{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b){
        return a.second > b.second;
    }
};

void dijkstra(ll src){
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    fill(dis, dis + N, 1e18);
    dis[src] = 0;
    pq.push({src, 0});

    while(!pq.empty()){
        auto par = pq.top(); pq.pop();
        ll u = par.first;
        ll uw = par.second;

        if(uw > dis[u]) continue;
        for(auto child : g[u]){
            ll v = child.first;
            ll vw = child.second;

            if(uw + vw < dis[v]){
                dis[v] = uw + vw;
                pq.push({v, dis[v]});
            }
        }
    }
}

int main()
{   
    ll n, m; cin >> n >> m;
    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    dijkstra(1);

    for(ll i = 1; i <= n; i++) cout << dis[i] << " " ;
    
    return 0;
}