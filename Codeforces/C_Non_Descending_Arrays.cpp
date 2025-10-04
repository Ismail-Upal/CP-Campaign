#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 103, mod = 998244353;
ll n, a[N], b[N], dp[N][2];

// ll rec(ll i, ll k, ll x, ll y){
//     if(i > n) return 1;
//     if(dp[i][k] != -1) return dp[i][k];

//     ll ans = 0;
//     if(a[i] >= x and b[i] >= y){
//         ans += rec(i + 1, 0, a[i], b[i]) % mod;
//     }
//     if(b[i] >= x and a[i] >= y){
//         ans += rec(i + 1, 1, b[i], a[i]) % mod;
//     }

//     return dp[i][k] = ans % mod;
// }

int main()
{   
    opt();
    
    tc{
        cin >> n; 
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];
        
        ll dp[n + 3][3];
        dp[1][0] = 1, dp[1][1] = 1;

        for(ll i = 2; i <= n; i++){
            for(ll j = 0; j <= 1; j++){
                ll ans = 0;
                if(a[i] >= a[i - 1] and b[i] >= b[i - 1]){
                    ans += dp[i - 1][j] % mod;
                }
                if(a[i] >= b[i - 1] and b[i] >= a[i - 1]){
                    ans += dp[i - 1][j] % mod;
                }
                dp[i][j] = ans % mod;
            }
        }

        cout << (dp[n][0] % mod + dp[n][1] % mod) % mod << endl;
    }
    
    return 0;
}