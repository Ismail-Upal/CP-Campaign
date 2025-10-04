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
        int n; cin >> n;
        int mx = 0, mn = 1e9;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }
        int ans = mx - mn - 1;
        if(ans <= 0) ans = 0;
        cout << ans << endl;
    }
    
    return 0;
}