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
        int n; cin >> n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x > 0) ans += x;
        }
        cout << "Case " << _ << ": " << ans << endl;
    }
    
    return 0;
}