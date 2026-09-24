#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 2e5 + 4;
ll n, m, y; 
vector<pair<ll, ll>> g[N];
vector<ll> x(N);
ll dis[N];
struct cmp{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b){
        return a.second > b.second;
    }
};

void dijkstra(ll src){
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    fill(dis, dis + N, 1e16);

    dis[src] = 0;
    pq.push({src, 0});

    while(!pq.empty()){
        auto par = pq.top();
        pq.pop();

        ll u = par.first;
        ll uw = par.second;

        if(uw > dis[u]) continue;

        for(auto child : g[u]){
            ll v = child.first;
            ll vw = child.second;

            ll wt1 = uw + vw;

            if(wt1 <= dis[v]){
                dis[v] = wt1;
                pq.push({v, wt1});
            }
        }
    }
}

void Solve(){
    cin >> n >> m >> y;
    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    for(ll i = 1; i <= n; i++){
        cin >> x[i];
        g[i].push_back({n + 1, x[i]});
        g[n + 1].push_back({i, x[i] + y});
    }
    
    dijkstra(1);
    for(ll i = 2; i <= n; i++) cout << dis[i] << " ";
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