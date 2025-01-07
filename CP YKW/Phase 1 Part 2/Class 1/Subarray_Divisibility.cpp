#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    vector<ll> v(n+1), pref(n+ 1);
    pref[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        pref[i] = ((pref[i - 1] + v[i] % n) + n) % n;
    }
    map<ll, ll> mp;
    mp[0] = 1;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans += mp[pref[i]];
        mp[pref[i]]++;
    }
    cout << ans;
    return 0;
}