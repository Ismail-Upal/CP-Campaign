#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
using i128 = __int128_t;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    ll n, k; cin >> n >> k;
    ll K = pow(10, k); 
    K--;
    ll mul = 1;

    while(n--){
        ll a; cin >> a;
        if(mul > (K / a)) mul = 1;
        else mul *= a;
    }

    cout << mul ;
    
    return 0;
}