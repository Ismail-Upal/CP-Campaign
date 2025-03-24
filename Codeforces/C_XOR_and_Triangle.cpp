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
        int x; cin >> x;
        if((x & (x - 1)) == 0 or (x & (x + 1)) == 0){
            cout << -1 << endl;
            continue;
        }
        int a = x ^ (x + 1);
        int b = x ^ (x - 1);
        if(x + x + 1 > a and a + x > x + 1) cout << a << endl;
        else if(x + x + 1 > b and b + x > x + 1) cout << b << endl;
        else cout << - 1 << endl;
    }
    
    return 0;
}