#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
ll sum(ll m){
    return m*(m+1)/2;
}
ll sum_left(ll m, ll n){
    ll f = n-1, s = (n - (m - n) - 1);
    return (f * (f + 1)/2) - (s * (s + 1)/2);
}
int32_t main()
{   
    opt();
 
    tc{
        ll n, x; cin >> n >> x;
        auto ok = [&](ll m){
            if(m <= n) return sum(m) >= x;
            else{
                return (sum(n) + sum_left(m, n)) >= x;
            }
        };
        ll l = 1, r = (2 * n) - 1, mid, ans = r;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}