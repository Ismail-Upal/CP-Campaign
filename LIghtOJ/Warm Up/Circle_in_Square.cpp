#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        double r; cin >> r;
        double pi = 2 * acos (0.0);
        double ans = (4 * r * r) - (pi * r * r);
        cout << fixed << setprecision(2);
        cout << "Case " << _ << ": " << ans << endl;
    }
    
    return 0;
}