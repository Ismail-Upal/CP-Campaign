#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int mod = 1e9 + 7;
int32_t main()
{   
    opt();
    
    tc{
        string n; int h; cin >> n >> h;
        int ans = 0;
        for(int i = 0; i < sz(n); i++){
            int m = n[i] - '0';
            int mul = m + (h * 2);
            int div = mul / 10;
            ans += div * 2;
            ans = ans % mod;
        }
        cout << ans % mod << endl;
    }
    
    return 0;
}