#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
const int m = 1e9 + 7;
ll bin_expon_iter(ll x, ll n){
    ll ans = 1;
    while( n ){
        if(n & 1) ans = (ans * x) % m;
        x = (x * x) % m;
        n >>= 1;
    }
    return ans;
}
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    cout << bin_expon_iter(2, n);
    return 0;
}