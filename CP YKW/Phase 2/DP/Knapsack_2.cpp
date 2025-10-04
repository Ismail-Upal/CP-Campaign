#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 200, M = 1e9 + 3;
ll n, W, w[N], v[N];
map<pair<int, int>, int> dp;
ll f(int i, ll wt){
    if(i > n) return 0;
    if(dp[{i, wt}] != 0) return dp[{i, wt}];
    ll p1 = f(i + 1, wt);
    ll p2 = 0;
    if(wt + w[i] <= W) p2 = f(i + 1, wt + w[i]) + v[i];
    return dp[{i, wt}] = max(p1, p2);
}

int32_t main()
{   
    opt();
    
    cin >> n >> W;   
    for(int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
    } 
    cout << f(1, 0);
    
    return 0;
}