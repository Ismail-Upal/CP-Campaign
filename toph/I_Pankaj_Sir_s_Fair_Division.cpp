#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
long long arithmetic_series_sum(ll a, ll d, ll n) {
    return (1LL * n * (2 * a + (n - 1) * d)) / 2;
}
int main()
{   
    opt();
    
    tc{
        ll l, r, d; cin >> l >> r >> d;
        ll n = r - l + 1;
        ll v1 = (l) + (d);
        ll v2 = (l + 1) + (2 * d);

        ll sum = arithmetic_series_sum(v1, v2 - v1, n);
        
        auto ok=[&](ll x){
            ll s = arithmetic_series_sum(v1, v2 - v1, x);
            return abs(sum - s - s);
        };
        
        ll lo = 0, hi = n - 1, ans = -1;

        while(lo <= hi){

            ll m1 = lo + (hi - lo) / 3, m2 = hi - (hi - lo) / 3;

            // cout << lo << hi << endl;

            if(ok(m1) >= ok(m2)){
                lo = m1 + 1;
                ans = ok(m1);
            }
            else{
                hi = m2 - 1;
            }
        }

        cout << ans << endl;

    }
    
    return 0;
}
