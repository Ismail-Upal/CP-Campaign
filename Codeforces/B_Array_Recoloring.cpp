#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()

int32_t main() {   
    opt();
    
    tc {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        if (k == 1) {
            ll l = *max_element(v.begin(), v.end() - 1);
            ll r = *max_element(v.begin() + 1, v.end());
            cout << max(l + v[n - 1], r + v[0]) << endl;
            continue;
        }
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        for(int i = 0; i <= k; i++){
            ans += v[i];
        }
        cout << ans << endl;
    }
    
    return 0;
}
