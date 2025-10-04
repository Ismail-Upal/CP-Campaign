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

    int n, l, r, x; cin >> n >> l >> r >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ways = 0;
    sort(v.begin(), v.end());
    for(int mask = 0; mask < (1 << n); mask++){
        int sum = 0, mx = -1, mn = 1e8;
        for(int i = 0; i < n; i++){
            if(mask >> i & 1){
                sum += v[i];
                mx = max(v[i], mx);
                mn = min(v[i], mn);
            }
        }
        if(sum >= l and sum <= r and mx - mn >= x) ways ++;
    }
    cout << ways ;
    
    return 0;
}