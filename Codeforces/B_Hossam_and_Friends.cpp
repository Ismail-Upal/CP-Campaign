#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

void Solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n + 1), mn_left(n + 1, 1);
    map<pair<int, int>, int> mp;
    while(m--){
        int u, v; cin >> u >> v;
        if(u > v) swap(u, v);
        mp[{v, u}] = 1;
    }

    for(auto [i, j] : mp){
        int v = i.first, u = i.second;
        mn_left[v] = max(mn_left[v], u + 1);
    }

    for(int i = 1; i <= n; i++){
        mn_left[i] = max(mn_left[i], mn_left[i - 1]);
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans += i - mn_left[i] + 1;
    }

    cout << ans << endl;
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