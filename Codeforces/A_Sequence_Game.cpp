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
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        ll x; cin >> x;
        int ok = 0;
        ll a = 1e9, b = -1e9;
        for(int i = 0; i < n; i++){
            a = min(v[i], a);
            b = max(v[i], b);
        }

        if(a <= x and x <= b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}