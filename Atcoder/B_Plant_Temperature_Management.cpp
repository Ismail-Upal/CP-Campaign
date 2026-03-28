#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    int n, k, l, r; cin >> n >> k >> l >> r;
    vector<ll> cost(n);
    for(int i = 0; i < n; i++){
        ll t; cin >> t;
        if(t < l or r < t) cost[i] = min(abs(t - l), abs(t - r));
        else cost[i] = 0;
    }
    sort(cost.begin(), cost.end());

    ll ans = 0;
    for(int i = 0; i < k; i++){
        ans += cost[i];
    }
    cout << ans;
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