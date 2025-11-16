#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n + 1), pref(n + 1, 0);
        for(int i = 1; i <= n; i++){
            cin >> v[i]; 
            pref[i] = pref[i - 1] + v[i];
        }
        ll sum = accumulate(v.begin() + 1, v.end(), 0LL);
        ll ans = sum, mx = 0;

        for(ll j = 1; j <= n; j++){
            mx = max(pref[j - 1] - (j * j) + j, mx);
            ll mx2 = (j * j) + j - pref[j];
            ans = max(ans, sum + mx2 + mx);
        }

        cout << ans << endl;
    }
    
    return 0;
}