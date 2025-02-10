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
        int a, b, c, d; cin >> a >> b >> c >> d;
        int x = a + b, y = c - b, z = d - c;
        if(x == y and y == z) cout << 3 << endl;
        else if(x == y or y == z or x == z) cout << 2 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}