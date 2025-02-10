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
        int n, l, r; cin >> n >> l >> r;
        vector<int> v(n + 1), lo, hi;
        for(int i = 1; i <= n; i++) cin >> v[i];
        for(int i = 1; i <= r; i++){
            lo.push_back(v[i]);
        }
        for(int i = l; i <= n; i++){
            hi.push_back(v[i]);
        }
        sort(lo.begin(), lo.end());
        sort(hi.begin(), hi.end());
        ll sum1 = 0, sum2 = 0;
        for(int i = 0; i < (r - l + 1); i++){
            sum1 += lo[i];
            sum2 += hi[i];
        }
        cout << min(sum1, sum2) << endl;
    }
    
    return 0;
}