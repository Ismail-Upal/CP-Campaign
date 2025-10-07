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
    
    ll n; cin >> n;
    ll px, pd;
    set<ll> se;
    vector<ll> rat(n + 1), div(n + 1);
    for(ll i = 1; i <= n; i++){
        ll x, d; cin >> x >> d;
        se.insert(d);
        rat[i] = x; div[i] = d;
        if(i > 1){
            if(pd == 1 and px >= 0 and d == 2){
                cout << "Impossible" ; return 0;
            }
            if(pd == 2 and px <= 0 and d == 1){
                cout << "Impossible" ; return 0;
            }
        }
        px = x; pd = d;
    }
    if(sz(se) == 1){
        cout << "Infinity" ; return 0;
    }


    auto ok = [&](ll x){
        for(ll i = 1; i <= n; i++){
            if(x >= 1900){
                if(div[i] == 2) return 0;
                else x += rat[i];
            }
            else{
                if(div[i] == 1) return 2;
                else x += rat[i];
            }
        }
        return 1;
    };

    ll l = -1e7, r = 1e7, m, ans = -1;
    while(l <= r){
        m = l + (r - l) / 2; // cout << m << endl;
        if(ok(m) == 1){
            ans = m;
            l = m + 1;
        }
        else if(ok(m) == 2) l = m + 1;
        else r = m - 1;
    }
    if(ans == -1){
        cout << "Impossible"; return 0;
    }
    
    for(ll i = 1; i <= n; i++){
        ans += rat[i];
    }

    cout << ans;
    
    return 0;
}