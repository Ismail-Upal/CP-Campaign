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
        ll n; cin >> n;
        vector<ll> a(n + 1), b(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];
        vector<ll> dp1p(n + 2), dp1s(n + 2), dp2p(n + 2), dp2s(n + 2);
        
        for(int i = 1; i <= n; i++){
            dp1p[i] = max(a[i], dp1p[i - 1] + a[i]);
        }
        for(int i = n; i >= 1; i--){
            dp1s[i] = max(a[i], dp1s[i + 1] + a[i]);
        }
        for(int i = 1; i <= n; i++){
            dp2p[i] = max(b[i], dp2p[i - 1] + b[i]);
        }
        for(int i = n; i >= 1; i--){
            dp2s[i] = max(b[i], dp2s[i + 1] + b[i]);
        }

        ll ans = -1e18;
        for(int i = 1; i <= n; i++){
            ll x = dp1p[i] + dp1s[i] - a[i];
            ll y = dp2p[i] + dp2s[i] - b[i];
            ans = max(ans, x + y);
        }
        cout << ans << endl;
    }
    
    return 0;
}