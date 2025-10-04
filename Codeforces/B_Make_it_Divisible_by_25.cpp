#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll dp[(1 << 18) + 3];
string s; 
int rec(ll mask){
    if(dp[mask] != -1) return dp[mask];

    string t = "";
    for(int i = 0; i < sz(s); i++){
        if(!(mask & (1 << i))){
            t += s[i];
        }
    }
    ll n = 0, i = 0;
    while(t[i] == '0') i++;

    for( ; i < sz(t); i++) n = n * 10 + (t[i] - '0');

    if(n < 25) return 1e9;
    if(n % 25 == 0){
        return 0;
    }

    int ans = 1e9;
    for(int i = 0; i < sz(s); i++){
        if(mask & (1 << i)) continue;
        ans = min(ans, rec(mask | (1 << i)) + 1) ;
    }

    return dp[mask] = ans;
}
int main()
{   
    opt();
    
    tc{
        cin >> s;

        memset(dp, -1, sizeof dp);
        cout << rec(0) << endl;
    }
    
    return 0;
}