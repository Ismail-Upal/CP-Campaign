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
        int a, b, c; cin >> a >> b >> c;
        int ans = 1e9;
        
        ans = min(ans, a + b - ((a & 1) and (b & 1)));
        ans = min(ans, b + c - ((b & 1) and (c & 1)));
        ans = min(ans, c + a - ((c & 1) and (a & 1)));

        cout << ans << endl;
    }
    
    return 0;
}