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
        double a, b; cin >> a >> b;
        double x = 100 / a;
        double y = (15 * 15) / b;
        if(abs(x - y) <= 1e-6) cout << "Equal";
        else if(x > y) cout << "Small";
        else cout << "Large";
        cout << endl;
    }
    
    return 0;
}