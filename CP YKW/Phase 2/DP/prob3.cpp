#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
int dp[1003];
int f(int n){
    if(n == 0) return 1;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += f(n - i);
    }
    return ans;
}
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    cout << f(n);
    
    return 0;
}