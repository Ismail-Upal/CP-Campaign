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
    
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll dp[n], ans = -1e9;
    for(int i = 0; i < n; i++){
        if(i == 0){
            dp[i] = v[i];
        }
        else{
            dp[i] = max(dp[i - 1] + v[i], v[i]);
        }
        ans = max(ans, dp[i]);
    }

    cout << ans;
    
    return 0;
}