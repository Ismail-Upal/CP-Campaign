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
        int per = (a + b + c) / 3;
        if(per * 3 != (a + b + c)){
            cout << "NO" << endl;
            continue;
        }
        int nd = c - per;
        c -= nd;
        int tmp = (a + b + nd) / 2;
        if(tmp >= a and tmp >= b and tmp >= c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}