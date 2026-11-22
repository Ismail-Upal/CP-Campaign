#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> g[n + 1];
    while(m--){
        int u, v, c; 
        cin >> u >> v >> c;
        g[u].push_back({v, c});
    }

    map<pair<int, int>, int> dis;
    map<tuple<int, int, int>, int> vis;
    queue<pair<int, int>> q;

    q.push({1, 0});
    dis[{1, 0}] = 0;

    while(!q.empty()){
        auto [u, uc] = q.front();
        q.pop();

        for(auto [v, vc] : g[u]){
            if(uc != vc and !vis[{u, v, vc}]){
                q.push({v, vc});
                dis[{v, vc}] = dis[{u, uc}] + 1;
                vis[{u, v, vc}] = 1;

                if(v == n){
                    cout << dis[{v, vc}];
                    return;
                }
            }
        }
    }
    
    cout << -1;
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