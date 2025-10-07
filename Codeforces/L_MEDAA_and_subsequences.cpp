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
    
    ll n; cin >> n;
    vector<ll> v(n + 1), pref(n + 1);
    map<ll, ll> mp;
    mp[0]++;
    ll ok = 0;
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
        pref[i] %= n;
        mp[pref[i]]++;
        if(mp[pref[i]] > 1) ok = 1;
    }

    if(ok) cout << "YES";
    else cout << "NO" ;
    
    return 0;
}