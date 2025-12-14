#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll lcm(ll a, ll b){
    return (a * b) / __gcd(a, b);
}
int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        ll ans = 1;
        for(ll i = 1; i < n; i++){
            if(v[i] % v[i - 1]){
                ll g = __gcd(v[i], v[i - 1]);
                ll x = v[i - 1] / g;
                ans = lcm(x, ans);
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}