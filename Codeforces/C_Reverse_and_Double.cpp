#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll mx = 0;
    for(int i = 0; i < n - 1; i++){
        mx = max(mx, abs(v[i] - v[i + 1]));
    }

    for(int i = 0; i < n; i++){
        ll x = 2 * v[i];
        if(i == 0) mx = min(mx, abs(x - v[i + 1]));
        else if(i == n - 1) mx = min(mx, abs(x - v[i - 1]));
        else mx = min(mx, max(abs(x - v[i - 1]), abs(x - v[i + 1])));
    }

    auto ok = [&](ll m){
        ll l = 1;
        while(l < n and abs(v[l] - v[l - 1]) <= m) l++;
        ll r = n - 2;
        while(r >= 0 and abs(v[r] - v[r + 1]) <= m) r--;

        if(l > r) return 1;

        if(abs(2 * v[l] - v[r + 1]) > m) return 0;
        if(abs(2 * v[r] - v[l - 1]) > m) return 0;

        for(ll i = l + 1; i <= r - 1; i++){
            ll x = 2 * v[i - 1];
            ll y = 2 * v[i];
            ll z = 2 * v[i + 1];
            if(abs(x - y) > m) return 0;
            if(abs(y - z) > m) return 0;
        }

        return 1;
    };
    
    ll l = 0, r = mx, m, ans = mx;
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

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}