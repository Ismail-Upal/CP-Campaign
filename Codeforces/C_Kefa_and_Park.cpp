#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e5 + 3;
int n, m;
vector<int> g[N], cat(N);

int dfs(int u, int p, int cnt){
    if(cat[u]) cnt++;
    else cnt = 0;

    if(cnt > m) return 0;

    int ans = 0, leaf = 1;
    for(auto v : g[u]){
        if(v != p){
            leaf = 0;
            ans += dfs(v, u, cnt);
        }
    }

    if(leaf) ans++;
    return ans;
}

void Solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> cat[i];
    
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    cout << dfs(1, -1, 0);
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