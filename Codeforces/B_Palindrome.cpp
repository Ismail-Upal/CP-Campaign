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
        ll n, m, k; cin >> n >> m >> k;
        ll ans = n / 2 + m / 2 + k / 2;
        ans *= 2;

        ans += max({n % 2, m % 2, k % 2});
        
        cout << ans << endl;
    }
    
    return 0;
}