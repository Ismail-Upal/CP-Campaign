#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll mod = 998244353, N = 1e5 + 3;
ll dp[N];

int32_t main()
{   
    opt();
    
    dp[1] = 1;
    for(int i = 2; i <= N; i++){
        dp[i] = ((i % mod) * (dp[i - 1] % mod)) % mod;
    }

    tc{
        string s; cin >> s;
        vector<ll> seg;
        ll cnt = 1;
        for(int i = 1; i < sz(s); i++){
            if(s[i] == s[i - 1]){
                cnt++;
                if(i == sz(s) - 1) seg.push_back(cnt);
            }
            else if(cnt >= 2){
                seg.push_back(cnt); cnt = 1;
            }
        }
        ll del = 0, ans = 1;

        for(auto i : seg){
            del += i - 1;
            ans = ((ans % mod) * (dp[i] % mod)) % mod;
        }

        cout << del << " " << ans ;
        cout << endl;
    }
    
    return 0;
}