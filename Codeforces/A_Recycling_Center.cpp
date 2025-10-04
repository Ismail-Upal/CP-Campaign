#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
   tc{
        ll n, c; cin >> n >> c;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());

        ll x = 0, ans = 0;
        for(ll i = 0; i < n; i++){
            ll y = v[i];
            for(int j = 1; j <= x; j++){
                y *= 2;
            }
            if(y <= c) x++;
            else ans++;
        }
        cout << ans << endl;
   }
    
    return 0;
}