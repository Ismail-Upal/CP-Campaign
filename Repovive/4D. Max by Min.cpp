#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > v[mx]) mx = i;
    }
    vector<int> pref(n);
    pref[0] = v[0], pref[n - 1] = v[n - 1];
    pref[mx] = v[mx];

    for(int i = 1; i < mx; i++){
        pref[i] = max(v[i], pref[i - 1]);
    }

    for(int i = n - 2; i > mx; i--){
        pref[i] = max(v[i], pref[i + 1]);
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += pref[i];
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