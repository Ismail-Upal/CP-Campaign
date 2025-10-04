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
        int n; cin >> n;
        ll ans = 0;
        vector<int> cnt(30, 0);
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            int k = __lg(x);
            cout << k << endl;
            cnt[k]++;
        }
        for(int k = 0; k < 30; k++){
            ans += 1LL * cnt[k] * (cnt[k] - 1) / 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}