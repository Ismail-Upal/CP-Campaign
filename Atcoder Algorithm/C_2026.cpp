#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n; cin >> n;
    vector<ll> mp(n + 1, 0);

    for(ll i = 1; i * i < n; i++){
        for(ll j = i + 1; (i * i) + (j * j) <= n; j++){
            mp[(i * i) + (j * j)]++;
        }
    }
    vector<ll> ans;
    for(ll i = 1; i <= n; i++){
        if(mp[i] == 1) ans.push_back(i);
    }

    cout << sz(ans) << endl;
    for(auto i : ans) cout << i << " " ;
    
    return 0;
}