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
    opt();
    
    tc{
        ll a, b, k; cin >> a >> b >> k;
        int ans = 2;
        int gcd = __gcd(a, b);
        a = a / gcd, b = b / gcd;
        if(max(a, b) <= k or (a <= k and b <= k)){
            ans = 1;
        }
        
        cout << ans << endl;
    }

    
    return 0;
}