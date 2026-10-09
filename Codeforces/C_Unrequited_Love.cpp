#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    map<ll, ll> mp;
    for(int i = 1; i + 4 <= n; i++){
        ll x = v[i] + v[i + 2] - v[i + 4];
        mp[x]++; 
    }

    ll ans = 0;
    for(int i = 1; i + 4 <= n; i++){
        ll x = v[i] + v[i + 2] - v[i + 4];
        ll cnt = mp[x];
        if(i + 6 <= n){
            ll y = v[i + 2] + v[i + 4] - v[i + 6];
            if(x == y) cnt--;
        }
        if(i + 8 <= n){
            ll y = v[i + 4] + v[i + 6] - v[i + 8];
            if(x == y) cnt--;
        }

        ans += cnt - 1;

        mp[x]--;
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