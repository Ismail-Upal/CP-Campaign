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
        ll n; cin >> n;
        vector<ll> v(n + 1) ;
        for(ll i = 1; i <= n; i ++){
            cin >> v[i];
        }

        ll mx = 0;
        for(ll i = 1; i <= n; i++){
            mx = max(v[i], mx);
            if(i % 2 == 0) v[i] = mx;
        }
        ll ans = 0;
        for(ll i = 1; i <= n; i++){
            if(n % 2 == 0 and i == n){
                if(v[i] <= v[i - 1]) ans += abs(v[i] - v[i - 1]) + 1;
                continue;
            }
            if(i % 2 == 0){
                if(v[i] > v[i - 1] and v[i] > v[i + 1]) continue;
                if(v[i] <= v[i - 1]){
                    ans += abs(v[i] - v[i - 1]) + 1;
                    v[i - 1] -= abs(v[i] - v[i - 1]) + 1;
                }
                if(v[i] <= v[i + 1]){
                    ans += abs(v[i] - v[i + 1]) + 1;
                    v[i + 1] -= abs(v[i] - v[i + 1]) + 1;
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}