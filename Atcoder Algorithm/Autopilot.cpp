#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m, s, t; 
    cin >> n >> m >> s >> t;

    vector<pair<int, int>> g[n + 1];
    while(m--){
        int u, v, w = 1; cin >> u >> v;
        g[u].push_back({v, w});
    }

    for(int i = 1; i <= n; i++){
        sort(g[i].begin(), g[i].end());
        if(g[i].size() >= 1) g[i][0].second = 0;
    }

    vector<int> dis(n + 1, INT_MAX);
    deque<pair<int, int>> dq;
    dq.push_back({s, 0});
    dis[s] = 0;

    while(!dq.empty()){
        auto [u, uw] = dq.front();
        dq.pop_front();

        if(uw > dis[u]) continue;

        for(auto [v, vw] : g[u]){
            if(uw + vw < dis[v]){
                dis[v] = uw + vw;
                if(vw == 0) dq.push_front({v, dis[v]});
                else dq.push_back({v, dis[v]});
            }
        }
    }

    if(dis[t] == INT_MAX) dis[t] = -1;
    cout << dis[t] ;
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