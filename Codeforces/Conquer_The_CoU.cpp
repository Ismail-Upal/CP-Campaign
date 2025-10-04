#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> g[n + 1], s(n + 1);

        for(ll i = 1; i < n; i++){
            ll u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(ll i = 1; i <= n; i++) cin >> s[i];
        ll mx = s[1];

        bool vis[n + 1]; memset(vis, 0, sizeof vis);

        queue<ll> q;
        q.push(1);
        vis[1] = 1;

        while(!q.empty()){
            ll u = q.front();
            q.pop();
            for(auto v : g[u]){
                if(!vis[v] and s[v] < mx){
                    mx += s[v] / 2;
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }

        ll ok = 1;
        for(ll i = 1; i <= n; i++){
            if(!vis[i]) ok = 0;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}