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
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            cin >> v[i]; mp[v[i]]++;
        }
        ll ok = 1;
        for(auto i : mp){
            if(i.second % k) ok = 0;
        }
        if(!ok){
            cout << 0 << endl; continue;
        }

        ll ans = 0;
        map<ll, ll> mp1;

        for(int i = 0, j = 0; j >= i and j < n; j++){
            mp1[v[j]]++;
            ll nd = mp[v[j]] / k;
            while(mp1[v[j]] > nd){
                mp1[v[i]]--;
                i++;
            }
            ans += j - i + 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}