#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    vector<vector<ll>> pref(n + 1, vector<ll>(32, 0));

    for(ll i = 1; i <= n; i++){
        for(ll k = 0; k < 32; k++){
            int add = 1;
            if(v[i] & (1ll << k)) add = 0;
            pref[i][k] = pref[i - 1][k] + add;
        }
    }

    auto ok = [&](ll l, ll r, ll k){
        ll ans = 0, len = r - l + 1;
        for(ll k = 0; k < 32; k++){
            ll zro = pref[r][k] - pref[l - 1][k];
            if(zro == 0) ans += (1ll << k); 
        }

        return ans >= k;
    };

    
    int q; cin >> q;
    while(q--){
        ll L, k; cin >> L >> k;
        ll l = L, r = n, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(L, m, k)){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << " ";
    }
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}