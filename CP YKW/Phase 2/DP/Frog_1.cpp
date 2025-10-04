#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 4;
vector<int> v(N);
int dp[N];
int n;
int f(int i){
    if(i >= n - 1) return 0;
    if(dp[i] != -1) return dp[i];
    int jump = f(i + 1) + abs(v[i] - v[i + 1]);
    if(i + 2 < n) jump = min(jump, f(i + 2) + abs(v[i] - v[i + 2]));
    return dp[i] = jump;
}
    
int32_t main()
{   
    opt();
    // memset(dp, -1, sizeof dp);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> v[i];
    // cout << f(0);

    for(int i = 1; i <= n; i++){
        if(i == 1) dp[i] = 0;
        else{
            dp[i] = dp[i - 1] + abs(v[i] - v[i - 1]);
            if(i - 2 >= 1) dp[i] = min(dp[i], dp[i - 2] + abs(v[i] - v[i - 2]));
        }
    }
    cout << dp[n];
    return 0;
}