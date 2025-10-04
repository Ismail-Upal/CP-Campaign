#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
ll gcd(ll a, ll b){
    if(a == 0) return b;
    return gcd(b % a, a);
}
ll reduce(ll a, string b){
    ll mod = 0;
    for(int i = 0; i < sz(b); i++){
        mod = (mod * 10 + b[i] - '0') % a;
    }
    return mod;
}
ll gcd_large(ll a, string b){
    ll num = reduce(a, b);
    return gcd(a, num);
}
int32_t main()
{   
    opt();
    
    ll a; string b; cin >> a >> b;
    if(a == 0) cout << b << endl;
    else cout << gcd_large(a, b) << endl;
    
    return 0;
}