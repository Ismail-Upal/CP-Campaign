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
        int n; cin >> n;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        
        ll lo = 0, hi = 0;

        for (int i = 1; i <= n; i++) {
            ll x = lo + v[i];
            ll y = hi + v[i];

            ll new_lo = min({x, y, llabs(x), llabs(y)});
            ll new_hi = max({x, y, llabs(x), llabs(y)});

            lo = new_lo;
            hi = new_hi;
        }

        cout << hi << endl;

    }
    
    return 0;
}