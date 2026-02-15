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
        for(ll i = 0; i < n; i++) cin >> v[i];
        
        map<ll, ll> mp;
        
        ll i = 0, j = 1, ans = 0;
        while(j < n){
            while(j < n and abs(v[i] - v[j]) - k <= 0) j++;
            if(j == n) break;
            if(!mp[i] and !mp[j]){
                ans++;
                mp[i] = mp[j] = 1;
                i++; j++;
            }
            while(i < n and mp[i]) i++;
            while(j < n and j <= i or mp[j]) j++;
        }

        cout << ans << endl;
    }
    
    return 0;
}