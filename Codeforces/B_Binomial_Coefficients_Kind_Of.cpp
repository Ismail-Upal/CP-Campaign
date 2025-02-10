#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int mod = 1e9 + 7;
int power(int x, int n){
    int ans = 1 % mod;
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
    
    int t; cin >> t;
    int n[t], k[t];
    for(int i = 0; i < t; i++) cin >> n[i];
    for(int i = 0; i < t; i++) cin >> k[i];

    for(int i = 0; i < t; i++){
        cout << power(2, k[i]) << endl;
    }
    
    return 0;
}