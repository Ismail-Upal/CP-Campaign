#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    vector<ll> h1(n + 1), h2(n + 1);
    for(ll i = 1; i <= n; i++) cin >> h1[i];
    for(ll i = 1; i <= n; i++) cin >> h2[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(3));
    
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= 2; j++){
            if(j == 1){
                dp[i][j] = max(dp[i - 1][1], h1[i] + dp[i - 1][2]);
            }
            if(j == 2){
                dp[i][j] = max(dp[i - 1][2], h2[i] + dp[i - 1][1]);
            }
        }
    }

    cout << max(dp[n][1], dp[n][2]) << endl;
}


int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}