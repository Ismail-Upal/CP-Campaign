#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<pair<ll, ll>> v(n);

        ll suma = 0, sumb = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            cin >> v[i].second;
            suma += v[i].first;
            sumb += v[i].second;
        }

        ll ans = 1e18;

        for(auto [a, b] : v){
            ans = min(ans, suma - a + b);
            ans = min(ans, sumb - b + a);
        }

        cout << ans << endl;
    }
    
    return 0;
}