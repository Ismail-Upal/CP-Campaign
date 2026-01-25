#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll M = 1e9 + 7;
ll binpow(ll a, ll b){
    if(b == 0) return 1 % M;
    if(b % 2 == 0){
        ll t = binpow(a, b / 2);
        return (1ll * t * t) % M;
    }
    else{
        ll t = binpow(a, (b - 1) / 2);
        t = (1ll * t * t) % M;
        return (1ll * a * t) % M;
    }
}
ll inverse(ll b){
    return binpow(b, M - 2);
}
ll modDiv(ll a, ll b){
    return 1ll * (a % M) * inverse(b) % M;
}
int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum = ((sum % M) + (v[i] % M)) % M;
        }
        ll p = 0, q = 0;
        for(int i = 0; i < n; i++){
            q += n - i - 1; q %= M;
            sum = ((sum % M) - (v[i] % M) + M) % M;
            p += ((v[i] % M) * (sum % M)) % M;
        }

        cout << modDiv(p, q) << endl;
    }
    
    return 0;
}