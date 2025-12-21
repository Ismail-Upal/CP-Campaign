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
        ll n, k; cin >> n >> k;
        vector<ll> a(n + 1), b(k + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= k; i++) cin >> b[i];

        sort(a.begin() + 1, a.end(), greater<ll>());
        sort(b.begin() + 1, b.end());
        
        ll ans = accumulate(a.begin() + 1, a.end(), 0LL);

        for(ll i = 1, j = 0; i <= k; i++){
            j += b[i];
            if(j <= n) ans -= a[j];
        }

        cout << ans << endl;
    }
    
    return 0;
}