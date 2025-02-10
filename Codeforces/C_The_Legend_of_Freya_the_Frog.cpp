#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll x, y, k; cin >> x >> y >> k;
        ll ans = 0;
        if(x > y){
            int mv = (x + k - 1) / k;
            
        }
        else if(x <= y){
            int mv = (y + k - 1) / k;
            ans += mv + mv;
        }
        cout << ans << endl;
    }

    return 0;
}