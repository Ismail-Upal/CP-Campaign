#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 3;
int n, k, h[N], dp[N];

int32_t main()
{   
    opt();
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> h[i];

    for(int i = 1; i <= n; i++){
        if(i == 1) dp[i] = 0;
        else{
            dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
            for(int j = 2; j <= k; j++){
                if(i - j >= 1){
                    dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
                }
            }
        }
    }
    cout << dp[n] << endl;
    
    return 0;
}