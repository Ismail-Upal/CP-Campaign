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
        int n; cin >> n;
        int ans = 1;
        for(int i = 1; ; i = 2 * i + 2){
            if(i >= n) break;
            ans++;
        }
        // if(n == 1) ans = 1;
        cout << ans << endl;
    }
    
    return 0;
}