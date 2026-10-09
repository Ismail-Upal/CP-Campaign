#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 1e5 + 5, inf = 1e18;
ll n, m;
vector<pair<ll, ll>> g[N];
vector<vector<ll>> dis(N, vector<ll> (2, inf));
struct cmp{
    bool operator()(vector<ll> a, vector<ll> b){
        return a[1] > b[1];
    }
};

void dijkstra(ll src){
    priority_queue<vector<ll>, vector<vector<ll>>, cmp> pq;
    pq.push({src, 0, 0});
    dis[src][0] = 0;

    while(!pq.empty()){
        auto par = pq.top();
        pq.pop();
        ll u = par[0];
        ll uw = par[1];
        ll used = par[2];

        if(uw > dis[u][used]) continue;
        for(auto [v, vw] : g[u]){
            if(used){
                if(uw + vw < dis[v][1]){
                    dis[v][1] = uw + vw;
                    pq.push({v, dis[v][1], 1});
                }
            }
            else{
                if(uw + vw < dis[v][0]){
                    dis[v][0] = uw + vw;
                    pq.push({v, dis[v][0], 0});
                }
                if(uw + vw / 2 < dis[v][1]){
                    dis[v][1] = uw + vw / 2;
                    pq.push({v, dis[v][1], 1});
                }
            }
        }
    }
}

void Solve(){
    cin >> n >> m;
    while(m--){
        ll u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    dijkstra(1);
    cout << dis[n][1];
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