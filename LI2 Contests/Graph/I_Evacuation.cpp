#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n; cin >> n;
    int k; cin >> k;

    vector<int> exit(k);
    for(int i = 0; i < k; i++) cin >> exit[i];

    vector<vector<int>> g(n + 1);
    vector<bool> vis(n + 1, 0);
    vector<int> dis(n + 1, -1), src(n + 1, -1);

    int m; cin >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;

    sort(exit.begin(), exit.end());
    for(auto i : exit){
        vis[i] = 1;
        dis[i] = 0;
        src[i] = i;
        q.push(i);
    }   

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = 1;
                dis[v] = dis[u] + 1;
                src[v] = src[u];
            }
        }
    }

    for(int i = 1; i <= n; i++) cout << dis[i] << " " ;
    cout << endl;
    for(int i = 1; i <= n; i++) cout << src[i] << " " ;
    
    return 0;
}