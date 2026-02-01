#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll mod = 1e9 + 7;
int32_t main()
{   
    opt();
    
    tc{
        ll n; cin >> n;

        ll sum = (((n % mod) * (n + 1)) % mod * (2 * n + 1) % mod) / 6;
        sum += ((n % mod) * (n - 1) % mod) / 2;
        sum += ((n % mod) * (n + 1) % mod) / 2;
        sum--;
        cout << (sum * 2022) % mod << endl;
    }
    
    return 0;
}