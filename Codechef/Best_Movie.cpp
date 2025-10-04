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
        int ans = 1e9;
        while(n--){
            int a, b; cin >> a >> b;
            if(a >= 7) ans = min(ans, b);
        }
        if(ans == 1e9) ans = -1;
        cout << ans << endl;
    }
    
    return 0;
}