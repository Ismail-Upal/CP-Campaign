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
        ll n, q; cin >> n >> q;
        vector<ll> v(n + 1), zro(n + 1), one(n + 1);
        for(ll i = 1; i <= n; i++){
            cin >> v[i];
            if(v[i] == 0) zro[i]++;
            else one[i]++;
            zro[i] += zro[i - 1];
            one[i] += one[i - 1];
        }

        vector<ll> dup(n + 1);
        for(ll i = 2; i <= n; i++){
            if(v[i] == v[i - 1]){
                dup[i]++;
            }
            dup[i] += dup[i - 1];
        }
        

        while(q--){
            ll l, r; cin >> l >> r;

            ll cnt1 = zro[r] - zro[l - 1], cnt2 = one[r] - one[l - 1];
       
            if(cnt1 % 3 or cnt2 % 3){
                cout << -1 << endl; continue;
            }
            ll ans = (cnt1 / 3) + (cnt2 / 3);
            // cout << ans ;
            
            ll d = dup[r] - dup[l + 1];
            if(d == 0) ans++;

            cout << ans << endl;
        }
    }
    
    return 0;
}