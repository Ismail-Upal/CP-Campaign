#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        int ok = 0;
        int ans = 0;
        // for(int k = 31; k >= 0; k--){
        //     if(ok) ans += 1 << k;
        //     if(n >> k & 1){
        //         ok = 1;
        //     }
        // }
        ans = __lg(n);
        cout << (1 << ans) - 1<< endl;
    }
    
    return 0;
}