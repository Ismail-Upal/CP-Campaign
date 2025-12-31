#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e4;
vector<int> g[N];
bool vis[N];
int dis[N];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dis[src] = 0;

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

int main()
{   
    opt();
    
    int n, src; cin >> n >> src;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x) g[i].push_back(j);
        }
    }

    memset(dis, -1, sizeof dis);
    bfs(src);

    for(int i = 1; i <= n; i++) cout << dis[i] << " " ;
    
    return 0;
}