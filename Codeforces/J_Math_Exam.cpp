#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (int _ = 1; _ <= t; _++)
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

        auto ok = [&](ll time){
            ll day = 0;
            for(ll i = 0, cur = 0; i < n; i++){
                if(v[i] > time) return false;

                if(cur + v[i] <= time){
                    cur += v[i];
                }
                else{
                    day++;
                    cur = v[i];
                }
            }
            day++;

            return day <= k;
        };

        ll l = 0, r = 1e15, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}