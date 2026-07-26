#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 2e5 + 5;
int n, k;
ll a[N], b[N];
ll dp[N][2][13];

ll rec(int i, bool in, int op){
    if(i == n) return 0;
    if(dp[i][in][op] != -1) return dp[i][in][op];

    ll ans = -1e18;
    if(in){
        ans = max(ans, rec(i + 1, 1, op) + b[i]);
        ans = max(ans, rec(i + 1, 0, op) + a[i]);
    }
    else{
        ans = max(ans, rec(i + 1, 0, op) + a[i]);
        if(op + 1 <= k) ans = max(ans, rec(i + 1, 1, op + 1) + b[i]);
    }
    return dp[i][in][op] = ans;
}

void Solve(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    memset(dp, -1, sizeof dp);

    cout << rec(0, 0, 0) << endl;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}

