#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n; cin >> n;
    map<ll, ll> mn;
    set<ll> se; se.insert(0);
    ll ans = 0;

    for(int i = 0; i < n; i++){
        ll y; cin >> y;
        se.insert(y);
        if(i == 0){
            mn[0] = y;
            mn[y] = 0;
            ans += 2 * y;
        }
        else if(*se.rbegin() == y){
            auto it = se.rbegin(); it--;
            ll x = *it;
            ans -= abs(x - mn[x]);
            if(abs(x - y) <= abs(x - mn[x])){
                mn[x] = y;
            }
            ans += abs(x - mn[x]);
            ans += y - x;
            mn[y] = x;
        }
        else{
            auto it = se.find(y);
            it--; ll x = *it;
            it++; it++; ll z = *it;

            ans -= abs(x - mn[x]);
            ans -= abs(z - mn[z]);

            if(abs(x - y) <= abs(x - mn[x])){
                mn[x] = y;
            }
            if(abs(x - y) <= abs(y - z)){
                mn[y] = x;
            }
            else mn[y] = z;

            if(abs(y - z) <= abs(z - mn[z])){
                mn[z] = y;
            }

            ans += abs(x - mn[x]) + abs(y - mn[y]) + abs(z - mn[z]);
        }

        cout << ans << endl;
    }
    
    return 0;
}