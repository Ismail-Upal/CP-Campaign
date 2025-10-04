#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int power(int x, int n, int mod){
    int ans = 1;
    while(n > 0){
        if(n & 1){
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
int32_t main()
{   
    opt();
    int b, p, m;
    while(cin >> b >> p >> m){
        cout << power(b, p, m) << endl;
    }
    
    return 0;
}