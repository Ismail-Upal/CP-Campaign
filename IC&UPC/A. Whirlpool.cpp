#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> x(n), y(n), w(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> y[i];
    for(int i = 0; i < n; i++) cin >> w[i];

    map<pair<ll, ll>, ll> mp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll c1 = x[j] - a * x[i] + b * y[i];
            ll c2 = y[j] - b * x[i] - a * y[i];

            ll cx = c1 * (1 - a) - b * c2;
            ll cy = b * c1 + c2 * (1 - a);

            mp[{cx, cy}] += w[i];
        }
    }

    ll ans = 0;
    for(auto i : mp) ans = max(ans, i.second);

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