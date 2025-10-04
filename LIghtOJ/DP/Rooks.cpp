#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e3;
ll n, k, col[N], dp[N][N];
ll rec(int i, int r){
    if(r == k) return 1;
    if(i > n) return 0;
    if(dp[i][r] != -1) return dp[i][r];

    ll ans = 0;
    for(int j = 1; j <= n; j++){
        if(!col[j]){
            col[j] = 1;
            ans += rec(i + 1, r + 1);
            col[j] = 0;
        }
    }
    ans += rec(i + 1, r);

    return dp[i][r] = ans;
}
int main()
{   
    opt();
    
    tc{
        cin >> n >> k;
        memset(col, 0, sizeof col);
        memset(dp, -1, sizeof dp);
        cout << "Case " << _ << ": " << rec(1, 0) << endl;
    }
    
    return 0;
}