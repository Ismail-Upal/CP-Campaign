#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const ll mx = 1e18;
int32_t main()
{   
    opt();
    
    vector<ll> v;
    
    for(ll i = 1; i <= mx; i *= 2){
        for(ll j = 1; i * j <= mx; j *= 3){
            for(ll k = 1; i * j * k <= mx; k *= 5){
                v.push_back(i * j * k);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << "The 1500'th ugly number is " << v[1500 - 1] << ".\n";
    return 0;
}