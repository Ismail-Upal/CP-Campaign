#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int mod = 1e9;
int32_t main()
{   
    opt();
    
    int a, b; 
    while(cin >> a >> b){
        ll ans = 1;
        for(int i = a; i >= (a - b + 1); i--){
            ans *= i;
            while(ans > 0 and ans % 10 == 0){
                ans /= 10;
            }
            ans = ans % mod;
        }
        cout << ans % 10 << endl;
    }
    
    return 0;
}