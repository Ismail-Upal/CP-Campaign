#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, x; cin >> n >> x;
    map<pair<ll, ll>, ll> mp;

    for(ll i = 1; i <= n; i++){
        if(x % i == 0){
            ll d = x / i;
            if(d <= n) mp[{i, x}]++;
        }
    }

    cout << sz(mp); 
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