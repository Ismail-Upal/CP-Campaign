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
    
    double a, b; char c;
    cin >> a >> b >> c;
    if(c == '+') cout << a + b << endl;
    else if(c == '-') cout << a - b << endl;
    else if(c == '*') cout << a * b << endl;
    else cout << fixed << setprecision(6) << (1.0 * a) / b << endl;
    
    return 0;
}