#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int mod = 998244353;
int fact(int n){
    if(n == 0) return 1;
    return 1LL * n * fact(n - 1) % mod;
}
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    cout << fact(n);
    
    return 0;
}