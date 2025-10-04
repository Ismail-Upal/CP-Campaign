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
        ll n; cin >> n;
        vector<ll> v(n + 3, 0);
        for(ll i = 1; i <= n; i++) cin >> v[i];
        ll ans = 0;
        for(ll i = 2; i <= n; i += 2){
            if(v[i - 1] > v[i]) ans += v[i - 1] - v[i], v[i - 1] = v[i];
            if(v[i + 1] > v[i]) ans += v[i + 1] - v[i], v[i + 1] = v[i];

            ll s = v[i - 1] + v[i + 1];
            if(s > v[i]){
                ans += s - v[i];
                ll d = s - v[i];
                if(d <= v[i + 1]) v[i + 1] -= d, d = 0;
                else d -= v[i], v[i] = 0;

                if(d <= v[i - 1]) v[i - 1] -= d, d = 0;
                else d -= v[i], v[i] = 0;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}