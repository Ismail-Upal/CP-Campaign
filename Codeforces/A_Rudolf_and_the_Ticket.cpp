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
        int n, m, k; cin >> n >> m >> k;
        vector<int> l(n), r(m);
        for(int i = 0; i < n; i++) cin >> l[i];
        for(int i = 0; i < m; i++) cin >> r[i];
        sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(l[i] >= k) continue;
            int nd = k - l[i];
            int lo = upper_bound(r.begin(), r.end(), nd) - r.begin();
            ans += lo;
        }
        cout << ans << endl;
    }
    
    return 0;
}