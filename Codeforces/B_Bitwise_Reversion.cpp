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
        int x, y, z; cin >> x >> y >> z;
        int a = 0, b = 0, c = 0, ok = 1;
        for(int k = 0; k <= 30; k++){
            int A = (x & (1 << k));
            int B = (y & (1 << k));
            int C = (z & (1 << k));

            if(A + B + C != 0 and (A ^ B ^ C) == 0) ok = 0;
        }

        if(ok) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
    
    return 0;
}