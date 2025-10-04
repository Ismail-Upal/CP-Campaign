#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int mod = 1e9 + 7;
int power(int x, int n){
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
    
    int n; cin >> n;
    
    cout << power(2, n - 1);
    
    return 0;
}

// 1 2 4 8 16 32