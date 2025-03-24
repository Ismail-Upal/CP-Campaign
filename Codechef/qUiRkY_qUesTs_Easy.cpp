#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = unsigned long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        ll mex = n * n, ans = max(mex, sum);
        for(int i = 0; i < n; i++){
            sum -= v[i];
            ans = max(ans, sum + 1LL * (i + 1) * (i + 1));
        }
        cout << ans << endl;
    }
    
    return 0;
}