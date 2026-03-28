#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 4e4 + 5, M = 500, mod = 1e9 + 7;
vector<ll> v;
ll dp[N];

void Solve(){
    ll n; cin >> n;
    cout << dp[n] % mod << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for(ll k = 1; k <= N; k++){
        string s = to_string(k);
        bool ok = 1;
        int i = 0, j = sz(s) - 1;
        while(i <= j){
            if(s[i] != s[j]) ok = 0;
            i++, j--; 
        }
        if(ok) v.push_back(k);
    }
    
    v.resize(sz(v));
    sort(v.begin(), v.end());
    
    dp[0] = 1;

    for(int i = 0; i < sz(v); i++){
        for(int j = 1; j <= N; j++){
            if(j >= v[i]) dp[j] = ((dp[j] % mod) + (dp[j - v[i]] % mod)) % mod;
        }
    }

    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}