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
        int a, b, c; cin >> a >> b >> c;
        int ans = 0;
        int mn = min({a, b, c});
        ans += mn * 10;
        a -= mn, b -= mn, c -= mn;
        ans += (a + b + c) * 3;
        cout << ans << endl;
    }
    
    return 0;
}