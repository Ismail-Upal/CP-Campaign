#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
        int n; cin >> n;
        vector<int> v(n);
        int ans = 1;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            ans = (1LL * ans * (v[i] + 1)) % mod;
            ans = ans % mod;
        }
        cout << ans << endl;
    }
    
    return 0;
}