#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> x(n), r(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        for(ll i = 0; i < n; i++) cin >> r[i];

        map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            ll lo = x[i] - r[i], hi = x[i] + r[i];
            for(ll j = lo; j <= hi; j++){
                ll a = 0, b = x[i] - j, c = r[i];
                a = sqrt((c * c) - (b * b));
                mp[j] = max(mp[j], a);
            }
        }
        ll sum = 0;
        for(auto [x, y] : mp) sum += (2 * y + 1);
        cout << sum << endl;
    }
    
    return 0;
}