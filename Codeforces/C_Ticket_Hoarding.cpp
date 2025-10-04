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
    
    tc{
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> v(n); 
        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll ans = 0, add = 0;
        for(ll i = 0; i < n; i++){
            ll need = min(m, k); k -= need;
            ans += need * (v[i] + add);
            add += need;
        }

        cout << ans << endl;
    }
    
    return 0;
}