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
        ll n, c; cin >> n >> c;
        vector<ll> v(n), mx;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            mx.push_back(v[i] + i + 1);
        }

        sort(mx.begin(), mx.end());
        ll ans = 0;
        for(auto i : mx){
            if(c - i >= 0) ans++, c -= i;
            else break;
        }
        cout << ans << endl;
    }
    
    return 0;
}