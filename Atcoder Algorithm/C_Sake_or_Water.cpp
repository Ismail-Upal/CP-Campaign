#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());

    ll ans = n - k;
    for(ll i = n - k; i < n; i++){
        if(x <= 0) break;
        ans++;
        x -= v[i];
    }
    if(x > 0) ans = -1;
    cout << ans << endl;
    
    return 0;
}