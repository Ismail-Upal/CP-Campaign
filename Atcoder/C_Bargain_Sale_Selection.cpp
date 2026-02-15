#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll>> v;
    for(int i = 1; i <= n; i++){
        ll a, b; cin >> a >> b;
        v.push_back({a - b, b});
    }
    sort(v.rbegin(), v.rend());

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(i <= k) ans += v[i - 1].second;
        else ans += v[i - 1].first + v[i - 1].second;
    }
    cout << ans;
    
    return 0;
}