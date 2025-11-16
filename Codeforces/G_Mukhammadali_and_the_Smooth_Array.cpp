#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 8001;
ll dp[N][N], n, a[N], c[N];

ll rec(ll i, ll j){
    if(i > n) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    ll ans = 1e9;
    if(a[i] > a[j]) ans = min(rec(i + 1, i), rec(i + 1, j) + c[i]);
    if(a[i] == a[j]) ans = rec(i + 1, i);
    if(a[i] < a[j]) ans = rec(i + 1, j) + c[i];

    return dp[i][j] = ans;
}

int main()
{   
    opt();
    
    tc{
        cin >> n;
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> c[i];
        
        memset(dp, -1, sizeof dp);
        cout << rec(1, 0) << endl;
    }
    
    return 0;
}