#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6 + 3;
ll mod = 127657753;

ll power(ll x, ll n, ll mod){
    ll ans = 1 % mod;
    while(n > 0){
        if(n & 1) ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

ll inverse(ll a, ll m){
    return power(a, m - 2, m);
}

ll dp[N];

ll rec(ll i){
    if(i == 0) return 2;
    if(i == 1) return 3;
    if(i == 2) return 5;

    if(dp[i] != -1) return dp[i];

    ll a = rec(i - 1) % mod;
    ll b = rec(i - 2) % mod;
    ll c = rec(i - 3) % mod;
    ll invC = inverse(c, mod);

    return dp[i] = ((((a * b) % mod) * invC) % mod + mod - b) % mod;
}
int main()
{   
    opt();
    
    memset(dp, -1, sizeof dp);
    
    tc{
        ll n; cin >> n;
        cout << rec(n) << endl;
    }
    
    return 0;
}