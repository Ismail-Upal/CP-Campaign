#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll n, x; cin >> n >> x;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        ll res = 0, up = 0;

        while(n > 0){
            ll l = 0, r = 1e9, ans = 0, mid;
            while(l <= r){
                mid = l + (r - l) / 2;
                if((sum + (mid - 1) * n) <= x) {
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }

            res += ans * n;

            up += ans;

            sum += ans * n;
            sum -= up + v[n - 1];

            n--;
        }
        cout << res << endl;
    }
    
    return 0;
}