#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int  main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n);
        ll gcd = 1, lcm = 1, mul = 1;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            mul *= v[i];
            gcd = __gcd(gcd, v[i]);
            lcm = mul / gcd;
        }
        cout << lcm << endl;
    }
    
    return 0;
}