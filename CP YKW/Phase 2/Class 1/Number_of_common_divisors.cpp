#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int a, b; cin >> a >> b;
        int gcd = __gcd(a, b);
        int ans = 0;
        for(int i = 1; i * i <= gcd; i ++){
            if(a % i == 0 and b % i == 0) ans ++;
            int g = gcd / i;
            if(g != i and a % g == 0 and b % g == 0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}