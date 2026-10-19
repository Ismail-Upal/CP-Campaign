#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;

    ll ans = 0;
    vector<ll> v(n + 1);
    map<ll, ll> mp;
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        mp[v[i]] = i;
    }
    
    for(ll i = n; i > 1; i--){
        ll i1 = mp[i - 1], i2 = i;
        ans += i2 - i1;
        swap(v[i1], v[i2]);
        mp[v[i1]] = i1;
        mp[v[i2]] = i2;

        
    }

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