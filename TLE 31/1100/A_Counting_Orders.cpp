#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int mod = 1e9 + 7;
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        ll ans = 1;
        for(int i = 0; i < n; i++){
            int lo = lower_bound(a.begin(), a.end(), b[i] + 1) - a.begin();
            ll x = n - lo; 
            ll y = x - (n - i - 1);
            ans = ((ans % mod) * (y % mod)) % mod;
        }
        cout << ans << endl;
    }
    
    return 0;
}