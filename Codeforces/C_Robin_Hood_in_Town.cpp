#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        double n; cin >> n;
        vector<int> v(n);
        double sum = 0, avr = 0, un = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        avr = sum / n;
        for(int i = 0; i < n; i++){
            if(v[i] < avr) un++;
        }
        // cout << avr << ' ' << un << endl;

        auto ok = [&](ll x){
            double tsum = sum + x;
            double tavr = tsum / n, tun = 0;
            for(int i = 0; i < n; i++){
                if(v[i] < (tavr / 2.0)) tun ++;
            }
            return tun > (n / 2.0);
        };

        ll l = 0, r = 1e14, ans = -1;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        if(n < 3) ans = -1 ;
        cout << ans << endl;
    }
    
    return 0;
}