#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 5;
int n, m; 
vector<int> g[N], cat(N);
bool vis[N];
int dfs(int u, int p, int cnt){
    if(cnt > m) return 0;
    int ans = 0;
    bool leaf = 1;
    for(auto v : g[u]){
        if(v != p){
            leaf = 0;
            int cnt2 = cnt;
            if(cat[v]) cnt2++;
            else cnt2 = 0;
            ans += dfs(v, u, cnt2);
        }
    }
    if(leaf) ans++;
    return ans;
}

int main()
{   
    opt();
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> cat[i];
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    cout << dfs(1, 0, cat[1]) << endl;
    
    return 0;
}