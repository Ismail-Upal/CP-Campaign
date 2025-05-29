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
        int ans = 0;
        int mx = 0;
        for(int i = 0; i < 32; i++){
            if(n & (1 << i)) mx = max(mx, (1 << i)) ;
        }

        for(int i = 0; i < 32; i++){
            if((1 << i) < mx) ans += (1 << i);
            else break;
        }
        cout << ans << endl;
    }
    
    return 0;
}