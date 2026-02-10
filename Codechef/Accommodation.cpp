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
        ll b, g, x, y, n; cin >> b >> g >> x >> y >> n;
        if(x + y > n){
            cout << -1 << endl;
            continue;
        }
        ll mxb = n - y, mxg = n - x;

        ll op1 = (b + mxb - 1) / mxb;
        ll op2 = (g + mxg - 1) / mxg;
        ll op3 = (b + g + n - 1) / n;

        cout << max({op1, op2, op3}) << endl;
    }
    
    return 0;
}