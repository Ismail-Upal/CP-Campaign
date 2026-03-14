#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    map<ll, ll> mp;
    for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        mp[x]++;
    }
    vector<ll> v;
    for(auto [i, j] : mp){
        v.push_back(j);
    }
    
    sort(v.rbegin(), v.rend());

    ll x = 2 * n;
    for(ll i = 0; i < sz(v); i++){
        v[i] = min(x - 1, v[i]);
        x = v[i];
    }
    set<ll> se;
    for(auto i : v) se.insert(i);
    ll ans = 0;
    for(auto i : se){
        if(i >= 0) ans += i;
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