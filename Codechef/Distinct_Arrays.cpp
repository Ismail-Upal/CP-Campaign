#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll mod = 998244353;
int32_t main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n);

        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }

        ll ans = 1;
        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++){
            ans *= (v[i] - i) % mod;
            ans %= mod;
        }

        cout << ans << endl;
    }
    
    return 0;
}