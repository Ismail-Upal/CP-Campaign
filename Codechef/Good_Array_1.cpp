#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()


void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    int dp[n + 1][n + 1], mp[505];
    memset(dp, 0, sizeof dp);
    memset(mp, 0, sizeof mp);

    for(int len = 1; len <= n; len++){
        for(int l = 1; l + len - 1 <= n; l++){
            int r = l + len - 1;
            dp[l][r] = 1e9;
            
            for(int i = 1; i <= n; i++) mp[i] = 0;
            for(int i = l; i <= r; i++) mp[v[i]]++;

            for(int k = l + 1; k < r; k++){
                int cost = 1 + dp[l][k - 1] + dp[k + 1][r];
                dp[l][r] = min(dp[l][r], cost);
            }
        }
    }
    
    cout << dp[1][n] << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}
