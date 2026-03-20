#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<ll> v(n + 1);
    
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
    }
    vector<ll> diff(n);
    for(int i = 1; i < n; i++){
        diff[i] = v[i + 1] - v[i] - 1;
    }
    sort(diff.begin() + 1, diff.end());
    ll ans = n;
    for(int i = 1; i <= n - k; i++){
        ans += diff[i];
    }
    cout << ans;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}