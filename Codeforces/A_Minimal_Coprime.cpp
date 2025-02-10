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
        int a, b; cin >> a >> b;
        if(a == 1 and b == 1){
            cout << 1 << endl;
            continue;
        }
        cout << b - a << endl;
    }
    
    return 0;
}