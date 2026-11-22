#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<ll> pref1(n + 1), pref2(n + 1);
    for(int i = 1; i <= n; i++){
        pref1[i] = pref1[i - 1] + v[i];
        pref2[i] = pref2[i - 1] + i * v[i];
    }

    while(m--){
        ll l, r; cin >> l >> r;
        ll sum = pref2[r] - pref2[l - 1];
        ll sub = (l - 1) * (pref1[r] - pref1[l - 1]);
        cout << sum - sub << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}