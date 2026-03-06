#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    for(ll i = 0; i < m; i++){
        ll x; cin >> x;
        v[x - 1]++;
    }
    // for(ll i = 0; i < n; i++) cout << v[i] << " ";
    sort(v.rbegin(), v.rend());

    auto ok = [&](ll time){
        ll need = 0, task = m;
        for(ll i = 0; i < n; i++){
            ll can = min(time, v[i]);
            need = max(need, can);
            task -= can;
            if(task <= 0) return true;
        }
        for(ll i = 0; i < n; i++){
            ll x = time - v[i];
            if(x > 1) task -= x / 2;
        }
        // cout << time << " " << need << " " << task << endl;
        return (task <= 0 and need <= time);
    };

    ll l = 0, r = 2 * m + 5, mid, ans = -1;
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