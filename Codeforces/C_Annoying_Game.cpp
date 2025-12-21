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
        ll n, k; cin >> n >> k;
        vector<ll> a(n + 3), b(n + 3);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];

        ll dp[n + 3];
        memset(dp, 0, sizeof dp); dp[0] = 0;
        ll cur = 0, mx = -1e18;
        for(ll i = 1; i <= n; i++){
            cur = max(a[i], cur + a[i]);
            dp[i] = cur;
            mx = max(mx, cur);
        }

        if(k % 2 == 0){
            cout << mx << endl;
            continue;
        }
        
        ll dp1[n + 3];
        memset(dp1, 0, sizeof dp1); dp1[n + 1] = 0;
        cur = 0;
        for(int i = n; i >= 1; i--){
            cur = max(a[i], cur + a[i]);
            dp1[i] = cur;
        }
        ll ans = -1e18;
        for(int i = 1; i <= n; i++){
            ans = max(ans, dp[i] - a[i] + b[i] + dp1[i]);
        }
        cout << ans << endl;
    }
    
    return 0;
}

