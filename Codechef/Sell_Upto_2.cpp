#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 104;
ll n, a[N], dp[N][2*N];

ll rec(ll i, ll cnt){
    if(i >= n) return 0;

    if(dp[i][cnt] != -1) return dp[i][cnt];

    int ache = cnt + 1;
    ll ans = 0;
    for(int j = 0; j <= 2; j++){
        if(j > ache) break;

        ll op = rec(i + 1, ache - j);
        ans = max(ans, op + j * a[i]);
    }

    return dp[i][cnt] = ans;
}

int main()
{   
    opt();
    
    tc{
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];

        memset(dp, -1, sizeof dp);
        cout << rec(0, 0) << endl;
    }
    
    return 0;
}