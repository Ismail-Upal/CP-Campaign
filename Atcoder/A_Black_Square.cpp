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
    
    int p, q, x, y; cin >> p >> q >> x >> y;
    if(p <= x and x <= (p + 99) and q <= y and y <= (q + 99)) cout << "Yes";
    else cout << "No";
    
    return 0;
}