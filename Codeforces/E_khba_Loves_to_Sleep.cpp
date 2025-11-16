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
        ll n, k, x; cin >> n >> k >> x;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        auto ok = [&](ll m){
            ll cnt = 0;
            for(ll i = 1; i < n; i++){
                ll l = v[i - 1] + m;
                ll r = v[i] - m;
                if(l <= r) cnt += r - l + 1;    
            }
            ll l = 0, r = v[0] - m;
            if(l <= r) cnt += r - l + 1;
            l = v[n - 1] + m, r = x;
            if(l <= r) cnt += r - l + 1;
            return cnt >= k;
        };  

        ll l = 0, r = 2e9 + 3, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m; 
                l = m + 1;
            }
            else r = m - 1;
        }
        // cout << ans;
        set<ll> res;

        l = 0, r = v[0] - ans;
        for(ll i = l; i <= r and k > 0; i++, k--){
            res.insert(i); 
        }
        
        l = v[n - 1] + ans, r = x;
        for(ll i = l; i <= r and k > 0; i++, k--){
            res.insert(i); 
        }
 
        for(ll i = 1; i < n; i++){
            ll l = v[i - 1] + ans;
            ll r = v[i] - ans;
            for(ll j = l; j <= r and k > 0; j++){
                if(res.find(j) != res.end()) continue;
                res.insert(j);
                k--;
            }
        }

        for(auto i : res) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}