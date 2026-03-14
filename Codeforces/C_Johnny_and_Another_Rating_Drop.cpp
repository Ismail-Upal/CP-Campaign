#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    n++;
    ll mx = __lg(n - 1); 
    ll ans = 0;
    for(ll k = 0; k <= mx; k++){
        ll x = (1ll << k);  
        if(n % x == 0) ans += (n / x) - 1;
        else ans += n / x;
    }

    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}