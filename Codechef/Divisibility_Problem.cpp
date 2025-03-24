#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int lcm(int a, int b, int c){
    return lcm(a, lcm(b, c));
}
int32_t main()
{   
    opt();
    
    tc{
        int n, a, b, c; cin >> n >> a >> b >> c;
        int x = n / a, y = n / b, z = n / c;
        int ab = n / lcm(a, b);
        int bc = n / lcm(b, c);
        int ca = n / lcm(a, c);
        int abc = n / lcm(a, b, c);
        int ans = x + y + z - ab - bc - ca + abc;
        cout << ans << endl;
    }
    
    return 0;
}