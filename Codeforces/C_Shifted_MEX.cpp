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
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        n = sz(v);
        
        ll ans = 1;
        for(ll i = 0, j = 1; i < n - 1; i++){
            if(v[i] + 1 == v[i + 1]) j++, ans = max(ans, j);
            else j = 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}