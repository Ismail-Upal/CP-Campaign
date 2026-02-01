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
        vector<int> v(n + 1);
        map<int, int> mp;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            mp[v[i] - i]++;
        }

        ll ans = 0;
        for(int i = 1; i <= n; i++){
            int nd = v[i] - i;
            mp[nd]--;
            ans += mp[nd];
        }
        cout << ans << endl;
    }
    
    return 0;
}