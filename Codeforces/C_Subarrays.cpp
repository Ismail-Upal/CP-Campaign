#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()


void Solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    vector<ll> pref(n + 1, 0);
    for(int i = 1; i <= n; i++) pref[i] = pref[i - 1] + v[i - 1];

    map<ll, ll> mp;
    ll l = 0, ans = 0;

    for(ll r = 1; r <= n; r++){
        while(l + k + 1 <= r){
            mp[pref[l] % k]++;
            l++;
        }
        ans += mp[pref[r] % k];
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