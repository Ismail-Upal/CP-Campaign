#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 118, mod = 10000;
ll dp[N];
ll fact(ll n){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1LL * n * fact(n - 1) % mod;
}
int32_t main()
{   
    opt();
    memset(dp, -1, sizeof(dp));
    tc{
        ll n; cin >> n;
        string ans = to_string(fact(n % mod));
        if(n >= 20) cout << "0000" << endl;
        else{
            for(int i = 4; i > sz(ans); i--){
                cout << 0;
            }
            cout << ans << endl;
        }
    }
    
    
    return 0;
}