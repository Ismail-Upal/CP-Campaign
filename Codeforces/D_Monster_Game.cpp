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
        vector<ll> a(n + 1), b(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];
        vector<ll> pref(n + 1, 0);
        a[0] = 0;
        sort(a.begin(), a.end());
        for(ll i = 1; i <= n; i++){
            pref[i] = pref[i - 1] + b[i];
        }

        ll res = 0;
        for(ll i = 1; i <= n; i++){
            ll strk = n - i + 1;
            ll l = 1, r = n, m, ans = -1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(pref[m] <= strk){
                    ans = m;
                    l = m + 1;
                }
                else r = m - 1;
            }
            if(ans != -1){
                res = max(res, a[i] * ans);
            }
        }
        cout << res << endl;
    }
    
    return 0;
}