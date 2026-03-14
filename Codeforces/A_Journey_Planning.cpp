#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);

    ll ans = 0;
    map<int, ll> mp;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        mp[i - v[i]] += v[i];
        ans = max(ans, mp[i - v[i]]);
    }

    cout << ans ;
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