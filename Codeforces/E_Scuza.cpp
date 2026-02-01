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
        ll n, q; cin >> n >> q;
        vector<ll> v(n), leg(n), pref(n, 0);
        ll mx = 0;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            mx = max(mx, v[i]);
            leg[i] = mx;

            if(i == 0) pref[i] = v[i];
            else pref[i] = pref[i - 1] + v[i];
        }
        while(q--){
            ll k; cin >> k;
            ll l = 0, r = n -1, mid, ans = -1;
            while(l <= r){
                mid = l + (r - l) / 2;
                if(leg[mid] <= k){
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            if(ans == -1) cout << 0 << " ";
            else cout << pref[ans] << " ";
        }
        cout << endl;
    }
    
    return 0;
}