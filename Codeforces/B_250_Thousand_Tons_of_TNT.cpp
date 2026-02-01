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
        int n; cin >> n;
        vector<int> v(n), div;
        for(int i = 0; i < n; i++) cin >> v[i];

        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                div.push_back(i);
                if(n / i != i) div.push_back(n / i);
            }
        }
        div.push_back(1);
        sort(div.begin(), div.end());

            ll ans = 0;
            for(int d : div){
                ll mx = 0, mn = 1e18;
                for(int i = 0; i < n; i += d){
                    ll sum = accumulate(v.begin() + i, v.begin() + d + i, 0LL);
                    mx = max(mx, sum);
                    mn = min(mn, sum);
                }
                ans = max(ans, mx - mn);
            }
            cout << ans << endl;
    }
    
    return 0;
}