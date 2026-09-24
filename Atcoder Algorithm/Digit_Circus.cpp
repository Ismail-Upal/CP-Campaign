#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()
const ll mod = 998244353;

ll dp[503][2][2][4][2000];

ll rec(int i, bool tight, bool lz, int sum, int mask, string &s){
    if(i == s.size()){
        bool has3 = mask & (1 << 3);
        int val = (sum == 0) + has3 + (__builtin_popcount(mask) == 3);
        if(!lz and val == 1) return 1;
        else return 0;
    }

    if(dp[i][tight][lz][sum][mask] != -1){
        return dp[i][tight][lz][sum][mask];
    }

    int up = tight ? (s[i] - '0') : 9;
    ll ans = 0;
    for(int d = 0; d <= up; d++){
        int newmask = mask;
        if(!(lz && d == 0)) newmask |= (1 << d);
        ans = ((ans % mod) + (rec(i + 1, tight && (d == up), lz && (d == 0), (sum + d) % 3, newmask, s) % mod)) % mod;
    }

    return dp[i][tight][lz][sum][mask] = ans;
}

void Solve(){
    string n; cin >> n;

    memset(dp, -1, sizeof dp);
    cout << rec(0, 1, 1, 0, 0, n);
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