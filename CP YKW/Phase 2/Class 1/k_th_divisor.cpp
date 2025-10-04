#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    ll n, k; cin >> n >> k;
    vector<ll> div;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);
            if(n / i != i){
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());
    if(sz(div) < k) cout << -1 << endl;
    else cout << div[k - 1]  ;
    
    return 0;
}