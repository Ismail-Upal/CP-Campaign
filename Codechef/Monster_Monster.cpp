#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, x; cin >> n >> x;
        ll ans = 0, y = 0;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        for(int i = 0; i < n; i++){
            v[i] += y;
            ans = max(ans, v[i]);
            y += x;
        }
        cout << ans << endl;
    }
    
    return 0;
}