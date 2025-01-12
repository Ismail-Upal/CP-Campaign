#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)

int32_t main()
{   
    opt();
    
    tc{
        ll a, b, c, d; cin >> a >> b >> c >> d;

        double x = b * log10(a), y = d * log10(c);
        if(x >= y) cout << ">" << endl;
        else cout << "<" << endl;
    }
    
    return 0;
}
