#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
map<pair<int, int>, int> mp;
vector<vector<int>> g;
vector<int> dp;

void dfs(int u, int p){
    for(auto v : g[u]){
        if(v != p){
            if(mp[{p, u}] < mp[{u, v}]){
                dp[v] = dp[u];
            }
            else dp[v] = dp[u] + 1;
            dfs(v, u);
        }
    }
}

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        mp.clear();
        dp.assign(n + 4, 0);
        g.assign(n + 4, vector<int> ());

        for(int i = 1; i < n; i++){
            int u, v; cin >> u >> v;
            mp[{u, v}] = i;
            mp[{v, u}] = i;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        mp[{0, 1}] = 0;
        dp[1] = 1;
        dfs(1, 0);
        
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    
    return 0;
}