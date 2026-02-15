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
    
    ll n, p, q, r; cin >> n >> p >> q >> r;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    vector<ll> pa(n + 3, -3e18), ra(n + 3, -3e18);

    for(ll i = 1; i <= n; i++){
        pa[i] = max(pa[i - 1], p * v[i]);
    }
    for(ll i = n; i >= 1; i--){
        ra[i] = max(ra[i + 1], r * v[i]); 
    }

    ll ans = -3e18;
    for(ll i = 1; i <= n; i++){
        ans = max(ans, pa[i] + ra[i] + q * v[i]);
    }

    cout << ans;
    
    return 0;
}