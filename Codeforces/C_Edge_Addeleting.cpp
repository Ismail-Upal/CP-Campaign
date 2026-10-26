#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<int> g[n + 1];
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    vector<bool> vis(n + 1, 0);
    vector<int> dis(n + 1, -1);
    q.push(n);
    vis[n] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u == 1) continue;

        for(auto v : g[u]){
            if(!vis[v]){
                dis[v] = dis[u] + 1;
                vis[v] = 1;
                q.push(v);
            }
        }
    }

    int ans = dis[1];
    while(m--){
        int v; cin >> v;
        if(dis[v] != -1){
            ans = max(ans, dis[v] + 1);
        }
    }

    cout << ans + 1 << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}