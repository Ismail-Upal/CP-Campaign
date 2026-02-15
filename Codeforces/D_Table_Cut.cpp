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
        ll a[n + 1][m + 1];
        ll tot = 0;
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= m; j++){
                cin >> a[i][j];
                tot += a[i][j];
            }
        }
        ll ans = 0;
        if(tot % 2 == 0){
            tot /= 2;
            ans = tot * tot;
        }
        else{
            tot /= 2;
            ans = tot * (tot + 1);
        }

        ll x, y;
        for(ll j = m; j >= 1; j--){
            for(ll i = 1; i <= n; i++){
                tot -= a[i][j];
                x = i, y = j;
                if(tot == 0) break;
            }
            if(tot == 0) break;
        }

        string s = "";
        for(ll i = 1; i < y; i++) s += "R";
        for(ll i = 1; i <= x; i++) s += "D";
        s += "R";
        y++, x++;

        for(ll i = x; i <= n; i++) s += "D";
        for(ll i = y; i <= m; i++) s += "R";

        cout << ans << endl << s << endl;
    } 
    
    return 0;
}