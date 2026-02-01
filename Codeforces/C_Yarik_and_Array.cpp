#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
#define int long long
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
vector<int> dp;
int ans = -1e18;
int f(int i, vector<int> &v, int n){
    if(i >= n) return 0;
    if(dp[i] != -1e18) return dp[i];
    int best = v[i];
    if(i + 1 < n and (abs(v[i]) % 2) != (abs(v[i + 1]) % 2)){
        best = max(best, f(i + 1, v, n) + v[i]);
    }
    f(i + 1, v, n);
    ans = max(ans, best);
    return dp[i] = best;
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        dp.assign(n, -1e18);
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        
        f(0, v, n);
        cout << ans << endl;
        ans = -1e18;/
    }
    
    return 0;
}