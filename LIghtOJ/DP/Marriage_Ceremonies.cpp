#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 17;
ll n, dp[1 << N], a[N][N];
ll rec(int mask){
    int i = __builtin_popcount(mask);
    if(i == n) return 0;
    if(dp[mask] != -1) return dp[mask];

    ll ans = 0;
    for(int c = 0; c < n; c++){
        if(!(mask & (1 << c))){
            ans = max(ans, rec(mask | (1 << c)) + a[i][c]);
        }
    }

    return dp[mask] = ans;
}
int main()
{   
    opt();
    
    tc{
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cin >> a[i][j] ;
        }
    
        memset(dp, -1, sizeof dp);
        cout << "Case " << _ << ": " << rec(0) << endl;
        memset(a, 0, sizeof a);
    }
    
    return 0;
}