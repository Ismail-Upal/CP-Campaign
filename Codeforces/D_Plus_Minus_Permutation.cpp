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
        ll n, x, y; cin >> n >> x >> y;

        ll lcm = (x * y) / __gcd(x, y);
        ll cnt = n / lcm;
        ll div_x = (n / x) - cnt;
        ll div_y = (n / y) - cnt;
        
        ll sum1 = (n * (n + 1) / 2) - ((n - div_x) * (n - div_x + 1) / 2);
        ll sum2 = div_y * (div_y + 1) / 2;


        cout << sum1 - sum2 << endl;
    }
    
    return 0;
}  