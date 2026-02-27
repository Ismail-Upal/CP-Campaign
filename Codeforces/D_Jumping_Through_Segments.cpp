#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<pair<ll, ll>> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }

        auto ok = [&](ll k){
            ll l = 0, r = 0;
            for(auto [i, j] : v){
                l = max(l - k, i);
                r = min(r + k, j);
                if(l > r) return 0;
            }

            return 1;
        };

        ll l = 0, r = 1e9, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}