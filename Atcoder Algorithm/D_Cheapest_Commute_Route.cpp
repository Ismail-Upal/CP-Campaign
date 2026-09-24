#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 1e5 + 5;
vector<pair<ll, ll>> g[N];
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

void Solve(){
    ll n, m, k; cin >> n >> m >> k;
    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dijkstra(1); 

    if(dis[n] <= k) cout << dis[n];
    else cout << -1; 
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