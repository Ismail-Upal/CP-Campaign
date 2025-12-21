#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll dp[2][11][20][2];

ll rec(string &s, bool tight, ll prev, ll idx, bool lz){
    if(idx == s.size()) return 1;
    if(dp[tight][prev][idx][lz] != -1) return dp[tight][prev][idx][lz];

    ll lo = 0;
    ll up = (tight == true) ? (s[idx] - '0') : 9;

    ll ans = 0;
    for(ll dg = lo; dg <= up; dg++){
        if(dg == prev and !lz) continue;
        
        ans += rec(s, (tight and dg == up) ? 1 : 0, dg, idx + 1, (dg == 0 and lz));
    }

    return dp[tight][prev][idx][lz] = ans;
}

int main()
{   
    opt();
    
    
        ll a, b; cin >> a >> b;
        string l = to_string(a - 1);
        string r = to_string(b);

        memset(dp, -1, sizeof dp);
        ll ans_l = rec(l, 1, 10, 0, 1);
        memset(dp, -1, sizeof dp);
        ll ans_r = rec(r, 1, 10, 0, 1);

        cout << ans_r - ans_l << endl;
    
    
    return 0;
}