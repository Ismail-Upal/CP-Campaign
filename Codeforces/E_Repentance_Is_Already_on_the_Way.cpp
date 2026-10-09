#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

int f(int a, int b){
    if(a == b) return 2;
    else return 1;
}

void Solve(){
    int n; cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    vector<int> spiral(n + 1), dp(n + 1);
    spiral[n] = f(a[n], b[n]);
    dp[n] = f(a[n], b[n]);

    for(int i = n - 1; i >= 1; i--){
        dp[i] = max(dp[i + 1] + f(a[i], b[i]) + f(b[i], a[i + 1]), spiral[i + 1] + f(a[i], b[i + 1]) + f(b[i], a[i + 1]));

        spiral[i] = spiral[i + 1] + f(a[i], b[i + 1]) + f(b[i], a[i + 1]);
    }

    cout << dp[1] << endl;
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