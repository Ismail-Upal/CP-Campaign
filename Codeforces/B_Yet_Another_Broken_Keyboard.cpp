#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < k; i++){
        char c; cin >> c;
        mp[c] = 1;
    }
    ll dp[n + 2];
    if(mp[s[0]] == 1) dp[0] = 1;
    else dp[0] = 0;
    
    for(int i = 1; i < n; i++){
        if(!mp[s[i]]) dp[i] = 0;
        else dp[i] = dp[i - 1] + 1;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += dp[i];
    }
    cout << ans ;
    
    return 0;
}