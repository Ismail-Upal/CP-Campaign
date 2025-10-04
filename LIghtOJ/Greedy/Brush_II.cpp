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
        ll n, w; cin >> n >> w;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            ll x, y; cin >> x >> y;
            v[i] = y;
        }
        sort(v.begin(), v.end());
        ll cur = v[0] + w, ans = 1;
        for(int i = 0; i < n; i++){
            if(v[i] > cur){
                ans++;
                cur = v[i] + w;
            }
        }
        cout << "Case " << _ << ": " << ans << endl;
    }
    
    return 0;
}