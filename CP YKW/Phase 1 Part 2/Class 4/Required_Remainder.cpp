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
        int x, y, n; cin >> x >> y >> n;
        int rem = n % x; 
        int nd = y - rem; 
        int ans = nd + n;
        if(ans > n) ans -= x;
        cout << ans << endl;
    }
    
    return 0;
}