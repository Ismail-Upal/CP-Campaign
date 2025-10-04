#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            ans++;
            if(n / i != i) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}