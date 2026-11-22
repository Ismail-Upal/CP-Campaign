#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, s; cin >> n >> s;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    map<ll, ll> mp;
    vector<ll> pref(n + 1);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i];
        mp[pref[i]]++;
    }
    
    ll cnt = mp[s];
    for(int i = 1; i <= n; i++){
        mp[pref[i]]--;
        ll nd = pref[i] + s;
        cnt += mp[nd];
    }

    cout << cnt;
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