#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int mod = 1e9 + 7;
int32_t main()
{   
    opt();
    
    tc{
        int ans = 1;
        int n, k; cin >> n >> k;
        while(k--){
            ans = 1LL * ans * n % mod;
        }
        cout << ans << endl;
    }
    
    return 0;
}