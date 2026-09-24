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
    
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    unordered_map<int, int> mp[11];

    for(int i = 0; i < n; i++){
        int len = sz(to_string(v[i]));
        int rem = v[i] % m;
        mp[len][rem]++;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        int len = sz(to_string(v[i]));
        int rem = v[i] % m;

        for(ll j = 1; j <= 10; j++){
            ll exp = ll(pow(10ll, j)) % m;
            ll rem1 = (v[i] * exp) % m;
            ll need = (m - rem1) % m;
            ans += mp[j][need];
        }
    }
    

    cout << ans ;
    
    return 0;
}