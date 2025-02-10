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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        auto ok = [&](ll mn){
            ll A = 0, B = 0;
            int use = k;

            for(int i = 0; i < n; i++){
                if(i % 2 == 0) A += v[i];
                else{
                    if(v[i] + use >= v[i - 1]){
                        B += (v[i] + v[i - 1] - v[i]);
                        use -= (v[i - 1] - v[i]);
                    }
                    else{
                        B += v[i] + use;
                        use = 0;
                    }
                }
                // cout << A << ' ' << B << endl;
            }
            // cout << A << ' ' << B << endl;
            return (A - B) <= mn;
        };
        ll l = 0, r = 1e15, mid, ans = 0;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}