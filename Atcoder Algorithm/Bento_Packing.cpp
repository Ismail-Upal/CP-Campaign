#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, w; cin >> n >> w;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    ll total = 1ll << n, ans = 0;
    for(ll mask = 0; mask < total; mask++){
        ll vol = 0, del = 0;
        for(ll i = 0; i < n; i++){
            if(mask & (1 << i)){
                vol += b[i];
                del += a[i];
            }
        }
        if(vol <= w) ans = max(ans, del);
    }

    cout << ans;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}