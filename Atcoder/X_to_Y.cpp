#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define lll __int128_t
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll x, y, k; cin >> x >> y >> k;

    ll ans = 1e18;
    for(ll i = x, j = 0; i > 0; i /= k, j++){
        for(ll z = i, op = 0; z <= 1e18; z *= k, op++){
            if(z == y){
                ans = min(ans, op + j);
            }
        }
    }
    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}