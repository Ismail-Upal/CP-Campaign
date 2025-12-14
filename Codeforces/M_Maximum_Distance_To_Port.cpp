#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 5;
int n, m, k;
int a[N], dis[N];
bool vis[N];
vector<int> g[N];

void bfs(int u){
    queue<int> q;
    q.push(u);
    dis[u] = 0;
    vis[u] = 1;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                vis[v] = 1;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{   
    opt();
    
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    while(m--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1);
    int ans[k + 1]; memset(ans, 0, sizeof ans);
    for(int i = 1; i <= n; i++){
        ans[a[i]] = max(ans[a[i]], dis[i]);
    }
    for(int i = 1; i <= k; i++) cout << ans[i] << " " ;
    
    return 0;
}