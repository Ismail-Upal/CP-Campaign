#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 55, M = 1e4;
int n, k;
int a[N], c[N];
int dp[108][M];
int f(int id, int tot){
    if(id > n){
        if(tot == k) return 1;
        else return 0;
    }
    int ans = 0;
    for(int i = 0; i <= c[id]; i++){
        if(tot + (i * a[id]) <= k) ans += f(id + 1, tot + (i * a[id]));
    }
    return ans;
}
int32_t main()
{   
    opt();
    
    tc{
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> c[i];
        // cout << f(1, 0) << endl;

        dp[0][0] = 0;
        for(int i = 1; i <= n; i++){
            int ans = 0;
            for(int j = 1; j <= c[i]; j++){
                ans += dp[i + 1][i * ]
            }
        }

    }
    
    return 0;
}