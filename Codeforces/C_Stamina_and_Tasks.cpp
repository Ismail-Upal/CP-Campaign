#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<double> c(n), p(n), dp(n);

    for(int i = 0; i < n; i++) cin >> c[i] >> p[i];
    dp[n - 1] = c[n - 1];
    
    for(int i = n - 2; i >= 0; i--){
        dp[i] = max(dp[i + 1], c[i] + (1 - p[i] / 100.00) * dp[i + 1]);
    }

    cout << fixed << setprecision(8) << dp[0] << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}