#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
map<ll, vector<ll>> g;
map<ll, bool> vis;

ll dfs(ll u){
    vis[u] = 1;
    ll ans = u;
    for(auto v : g[u]){
        if(!vis[v]){
            ans = max(ans, dfs(v));
        }
    }
    return ans;
}

void Solve(){
    ll n; cin >> n;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        ll x = v[i] + i - 1;
        ll y = x + i - 1;
        g[x].push_back(y);
    }
    
    cout << dfs(n) << endl;
    g.clear();
    vis.clear(); 
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}