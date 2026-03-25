#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for(ll i = 0; i < n; i++){
        if(v[i] > c) break;
        ll nw = min(v[i] + k, c);
        k -= (nw - v[i]);
        v[i] = nw;
        c += v[i];
    }
    
    cout << c << endl;
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