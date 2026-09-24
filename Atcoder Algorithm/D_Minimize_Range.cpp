#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        v[i] %= k;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    ll ans = v.back() - v.front();
    for(int i = 0; i < sz(v) - 1; i++){
        ll x = v[i] + k;
        ll y = v[i + 1];
        ans = min(ans, x - y);
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
