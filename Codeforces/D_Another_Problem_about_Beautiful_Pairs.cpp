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
        vector<ll> v(n + 1);

        for(ll i = 1; i <= n; i++) cin >> v[i];

        ll ans = 0;

        for(ll x = 1; x * x <= n; x++){
            for(ll j = 1; j <= n; j++){
                ll i = j - x * v[j];
                if(i < 1 or i > n or i >= j) continue;
                if(v[i] * v[j] == j - i) ans++;
            }
        }

        for(ll y = 1; y * y <= n; y++){
            for(ll i = 1; i <= n; i++){
                ll j = i + v[i] * y;
                if(j < 0 or j > n or v[i] <= (ll) sqrt(n)) continue;
                if(v[i] * v[j] == j - i) ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}