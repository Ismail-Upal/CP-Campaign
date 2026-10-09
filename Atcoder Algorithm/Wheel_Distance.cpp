#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 2e5 + 5;
vector<pair<ll, ll>> g[N];
ll dis[N];

struct cmp{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b){
        return a.second > b.second;
    }
};

void dijkstra(ll src){
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    fill(dis, dis + N, 4e18 + 3);

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
    ll n, q; cin >> n >> q;

    vector<ll> a(n + 1), b(n + 1);
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        ll v = (i % n) + 1;
        g[i].push_back({v, a[i]});
        g[v].push_back({i, a[i]});
    }
    for(ll i = 1; i <= n; i++){
        cin >> b[i];
        ll v = n + 1;
        g[i].push_back({v, b[i]});
        g[v].push_back({i, b[i]});
    }

    vector<ll> pref(n + 1, 0);
    for(ll i = 1; i < n; i++){
        pref[i] = pref[i - 1] + a[i];
    }

    dijkstra(n + 1);

    while(q--){
        ll s, t; cin >> s >> t;
        if(t == n + 1){
            cout << dis[s] << endl;
        }
        else{
            ll s1 = pref[t - 1] - pref[s - 1];
            ll s2 = pref[s - 1] + a[n] + (pref[n - 1] - pref[t - 1]);
            ll s3 = dis[s] + dis[t];
            cout << min({s1, s2, s3}) << endl; 
        }
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