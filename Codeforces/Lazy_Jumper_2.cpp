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
    vector<ll> v(n + 1) ;
    for(int i = 1; i <= n; i++) cin >> v[i];
    ll x = 1;
    while(x <= n){
        if(x + v[x] <= n) x = v[x] + x;
        else break;
    }

    cout << x;
    
    return 0;
}