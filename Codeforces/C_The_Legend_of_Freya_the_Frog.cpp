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
        ll x, y, k; cin >> x >> y >> k;
        ll a = (x + k - 1) / k;
        ll b = (y + k - 1) / k;
        if(a > b){
            cout << 2 * a - 1 << endl;
        }
        else cout << 2 * b << endl;
    }
    
    return 0;
}