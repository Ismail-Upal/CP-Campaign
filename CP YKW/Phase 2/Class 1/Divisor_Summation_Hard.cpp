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
        ll n, ans = 0; cin >> n;
        
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0) ans += i;
            if(n / i != i) ans += (n / i);
        }
        cout << ans - n << endl;
    }
    
    return 0;
}