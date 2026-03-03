#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll s, m; cin >> s >> m;

    auto ok = [&](ll x){
        ll sum = s;
        for(ll k = 60; k >= 0; k--){
            if(m & (1ll << k)){
                ll d = (sum / (1ll << k));
                d = min(d, x);
                sum -= d * (1ll << k);
            }
        }
        return sum == 0;
    };
    
    ll l = 0, r = 1e18, mid, ans = -1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << endl;
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