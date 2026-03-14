#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    vector<pair<ll, ll>> v(n);
    set<ll> se;
    for(ll i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
        se.insert(v[i].first);
    }
    if(sz(se) == 1 and v[0].first == 0){
        cout << -1 << endl;
        return;
    }
    sort(v.rbegin(), v.rend());
    ll i = 1, j = 2, k = 3;
    
    cout << v[0].second << " " << v[1].second << " " << v[n - 1].second << endl;
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