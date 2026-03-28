#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, k, m; cin >> n >> k >> m;
    map<string, ll> mp;
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        mp[s] = i;
    }

    vector<ll> cost(n + 1);
    for(int i = 1; i <= n; i++) cin >> cost[i];

    while(k--){
        ll x; cin >> x;
        vector<ll> id(x);
        ll mn = 1e9;
        for(int i = 0; i < x; i++){
            cin >> id[i];
            mn = min(mn, cost[id[i]]);
        }
        for(int i = 0; i < x; i++){
            cost[id[i]] = mn;
        }
    }

    ll ans = 0;
    for(int i = 0; i < m; i++){
        string s; cin >> s;
        ans += cost[mp[s]];
    }

    cout << ans;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}