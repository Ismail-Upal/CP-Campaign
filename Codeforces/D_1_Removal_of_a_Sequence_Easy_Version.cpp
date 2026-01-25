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
        ll x, y, k; cin >> x >> y >> k;
        ll i = y;

        auto ok = [&](ll kth){
            for(int i = 1; i <= x; i++){
                kth -= kth / y;
            }
            return kth >= k;
        };

        ll l = 1, r = 1e12, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}