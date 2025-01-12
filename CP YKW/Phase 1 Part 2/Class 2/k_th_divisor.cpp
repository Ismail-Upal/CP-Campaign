#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
vector<ll> find_divisors(ll n) {
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}
int32_t main()
{   
    opt();
    
    ll n, k; cin >> n >> k;
    auto v = find_divisors(n);
    sort(v.begin(), v.end());
    if(sz(v) < k) cout << - 1;
    else cout << v[k-1] ;
    return 0;
}