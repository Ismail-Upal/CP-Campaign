#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> g[n];
    
    while(m--){
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back({w, v});
        g[v].push_back({w, u});
    }

    int s; cin >> s;
    vector<int> cost(n, INT_MAX);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    cost[s] = 0;
    
    while(!pq.empty()){
        auto [uw, u] = pq.top();
        pq.pop();
        
        if(uw > cost[u]) continue;

        for(auto [vw, v] : g[u]){
            int mx = max(uw, vw);
            if(mx < cost[v]){
                cost[v] = mx;
                pq.push({cost[v], v});
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(cost[i] == INT_MAX) cout << "Impossible" << endl;
        else cout << cost[i] << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":" << endl;
        Solve();
    }
    
    return 0;
}