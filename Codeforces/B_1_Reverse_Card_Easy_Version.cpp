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
        ll n, m; cin >> n >> m;

        ll ans = 0;
        for(ll j = 1; j <= m; j++){
            ll l = j * (j - 1);
            if(l <= n){
                ans++;
                ans += (n - l) / (j * j);
            }
        }
        cout << ans - 1 << endl;
    }
    
    return 0;
}