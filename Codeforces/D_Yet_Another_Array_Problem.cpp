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
        ll n; cin >> n;
        vector<ll> v(n);
        int odd = 0;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2) odd++;
        }
        
        if(odd > 0){
            cout << 2 << endl; continue;
        }

        sort(v.begin(), v.end());

        ll ans = 1e18;

        for(ll i = 0; i < n; i++){
            for(ll j = 2; ; j++){
                if(__gcd(v[i], j) == 1){
                    ans = min(ans, j); break;
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}