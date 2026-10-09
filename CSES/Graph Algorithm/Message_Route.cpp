#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e5 + 5;
vector<int> g[N];
int dis[N];
bool vis[N];

void bfs(int u){
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    dis[u] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                q.push(v);
                vis[v] = 1;
                dis[v] = dis[u] + 1;
            }
        }
    }
}

void Solve(){
    int n, m; cin >> n >> m;
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1);
    if(!vis[n]){
        cout << "IMPOSSIBLE"; return;
    }

    cout << dis[n] << endl;
    vector<int> path = {n};

    int v = n, d = dis[n];
    while(d > 1){
        for(auto u : g[v]){
            if(vis[u] and dis[u] + 1 == d){
                path.push_back(u);
                v = u;
                d--;
                break;
            }
        }
    }

    reverse(path.begin(), path.end());
    for(auto i : path) cout << i << " ";
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