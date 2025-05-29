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
        int r, c, a, b; cin >> r >> c >> a >> b;

        auto f = [&](int r, int c){
            ll cnt = 0;
            while(r > 1) r = (r + 1) / 2, cnt++;
            while(c > 1) c = (c + 1) / 2, cnt++;
            return cnt;
        };

        ll ans = min({f(r, b), f(a, c), f(r, c - b + 1), f(r - a + 1, c)});
        cout << ans + 1 << endl;
    }
    
    return 0;
}