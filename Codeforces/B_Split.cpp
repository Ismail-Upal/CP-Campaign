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
        map<ll, ll> mp;
        vector<ll> v(2 * n);
        for(ll i = 0; i < 2 * n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        ll odd = 0, evn = 0;
        for(auto i : mp){
            if(i.second % 2) odd ++;
        }

        ll ans = 0, cnt = 0;
        for(auto i : mp){
            ll x = i.second;
            if(x % 2 == 0){
                ll y = x / 2;
                if(y % 2) ans += 2;
                else cnt++;
            }
        }
        if(cnt % 2 == 0){
            ans += cnt * 2;
            ans += odd;
        }
        else{
            ans += (cnt - 1) * 2;
            if(odd >= 2) ans += 2;
            ans += odd;
        }

        cout << ans << endl;
    }
    
    return 0;
}