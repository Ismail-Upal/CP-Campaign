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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    opt();
    
    ll n; 
    cin >> n;

    vector<ll> dp;
    dp.push_back(0); // dummy (1-based)
    dp.push_back(1); // F1
    dp.push_back(1); // F2

    ll ans = -1;
    if (n == 1) ans = 2; // largest occurrence

    for (ll i = 3; ; i++) {
        ll c = dp[i - 1] + dp[i - 2];
        if (c > n) break;

        dp.push_back(c);

        if (c == n) {
            ans = i; // do NOT break (good habit)
        }
    }

    cout << ans;

    
    return 0;
}