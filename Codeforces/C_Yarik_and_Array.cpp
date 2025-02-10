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
        int n; cin >> n;
        vector<ll> v(n + 1), pref(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        pref[1] = v[1];
        for(int i = 2; i <= n; i++){
            if(abs(v[i] % 2) != abs(v[i - 1] % 2)){
                pref[i] = pref[i - 1] + v[i];
                if(pref[i] < v[i]) pref[i] = v[i];
            }
            else pref[i] = v[i];
        }
        // for(int i = 1; i <= n; i++) cout << pref[i] << ' ';
        ll ans = INT_MIN;
        for(int i = 1; i <= n; i++){
            ans = max(ans, pref[i]);
        }
        cout << ans << endl;
    }
    
    return 0;
}