#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    vector<ll> v(n + 1);
    ll minSz = 0, plsSz = 0;
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] < 0) minSz++;
        else plsSz++;
    }

    vector<pair<ll, ll>> minus(minSz + 1);
    ll mx = 0, j = 1;
    for(ll i = 1; i <= n; i++){
        if(v[i] > 0) mx++;
        else{
            minus[j - 1].second = mx;
            minus[j].first = mx;
            mx = 0;
            j++;
        }
    }
    minus[j - 1].second = mx;


    vector<ll> pref(minSz + 1);
    pref[1] = minus[1].second + 1;
    for(ll i = 2; i <= minSz; i++){
        pref[i] = pref[i - 2] + minus[i].second + 1;
    }

    ll ans = 0;
    for(ll i = 1; i <= minSz; i++){
        ll del = 0;
        if(i > 1) del = pref[i - 2];

        ll l = minus[i].first + 1, r;

        if(i % 2 == 0){
            if(minSz % 2 == 0) r = pref[minSz] - del;
            else r = pref[minSz - 1] - del;
        }
        else{
            if(minSz % 2) r = pref[minSz] - del;
            else r = pref[minSz - 1] - del;
        }
        ans += l * r;
    }

    cout << ans << " " << n * (n + 1) / 2 - ans ;
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