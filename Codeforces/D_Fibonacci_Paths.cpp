#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 4;
int n, m; 
vector<int> g[N], vis(N), a(N);
vector<vector<int, int>> edge(N);
map<pair<int, int>, int> dp;

int dfs(int a, int b){
    if(dp[{a, b}]) return dp[{a, b}];

    int ans = 0;
    for(auto c : g[b]){
        if(dp[] == a + b){
            ans += 1 + dfs(b, c);
        }
    }
    return dp[{a, b}] = ans;
}
int main()
{   
    opt();
    
    tc{
        cin >> n >> m;
        for(int i = 1; i <= n; i++) cin >> a[i];
        while(m--){
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            edge.push_back({u, v});
        }
        ll ans = 0;

        for(auto [a, b] : edge){
            ans += dfs(a, b);
        }

        cout << ans << endl;
    }
    
    return 0;
}