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

    ll n, m; cin >> n >> m;
    ll pref[n + 1];
    pref[0] = 0;
    for(ll i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + (i * (i + 1) / 2);
    }

    vector<ll> g[n + 1];
    while(m--){
        ll u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(ll i = 1; i <= n; i++){
        ll x = n - sz(g[i]) - 1;
        if(x <= 1) cout << 0 << " "; 
        else cout << pref[x - 2] << " " ;
    }
    
    return 0;
}