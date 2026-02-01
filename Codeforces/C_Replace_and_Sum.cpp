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
    
    tc{
        ll n, q; cin >> n >> q;
        vector<ll> a(n + 1), b(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];

        ll mx = 0;
        for(ll i = n; i >= 1; i--){
            mx = max(mx, b[i]);
            a[i] = max(mx, a[i]);
        }
        mx = a[n];
        for(ll i = n - 1; i >= 1; i--){
            mx = max(a[i], mx);
            a[i] = mx;
        }

        vector<ll> pref(n + 1);
        pref[0] = a[0];
        for(ll i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];

        while(q--){
            ll l, r; cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " " ;
        }

        // for(ll i = 1; i <= n; i++) cout << a[i] << " " ;
        cout << endl;
    }
    
    return 0;
}