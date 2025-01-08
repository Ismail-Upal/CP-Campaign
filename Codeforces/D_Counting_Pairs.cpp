#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        ll n, x, y; cin >> n >> x >> y;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        ll ans = 0;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            ll l = sum - v[i] - x;
            ll r = sum - v[i] - y;
            int lo = lower_bound(v.begin(), v.end(), r) - v.begin();
            int up = upper_bound(v.begin(), v.end(), l) - v.begin();
            ans += max(0, (up - lo));
            if(lo <= i and i < up) ans--;
        }
        cout << ans / 2 << endl;
    }   
    
    return 0;
}