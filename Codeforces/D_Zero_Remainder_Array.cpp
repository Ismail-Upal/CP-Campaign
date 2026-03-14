#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        ll nd = k - (x % k);
        if(nd == k) continue;
        if(!mp[nd]) v.push_back(nd);
        mp[nd]++;
    }

    sort(v.begin(), v.end());
    ll x = 0;
    for(auto i : v){
        x = max(x, i + 1 + (mp[i] - 1) * k);
    }

    cout << x << endl;
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