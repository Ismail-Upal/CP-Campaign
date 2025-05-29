#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> pref(n + 1, 0);
        for(int i = 1; i <= n; i++){
            ll x; cin >> x;
            pref[i] = pref[i - 1] + x;
        }
        ll ans = 0;
        for(int i = 1; i < n; i++){
            ans = max(ans, gcd(pref[n], pref[i]));
        }
        cout << ans << endl;
    }
    
    return 0;
}