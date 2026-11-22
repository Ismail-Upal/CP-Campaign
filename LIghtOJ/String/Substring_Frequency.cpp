#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define lll __int128
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll mod = (1ll << 61) - 1;

ll Base(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    ll base = uniform_int_distribution<ll>(256, mod - 1)(rng) | 1; 
    return base;
}

void Solve(){
    string text, pattern; 
    cin >> text >> pattern;

    // set base by random
    ll base = Base();

    // single string hashing
    ll m = pattern.length();
    
    ll hash = 0;
    for(char c : pattern){
        hash = (lll(hash) * base + c) % mod;
    }

    // ranged prefix string hashing
    int n = text.length();

    vector<ll> pref(n + 1, 0), pw(n + 1, 0);
    pw[0] = 1;

    for(ll i = 1; i <= n; i++){
        pw[i] = (lll(pw[i - 1]) * base) % mod;
    }

    for(ll i = 1; i <= n; i++){
        pref[i] = (lll(pref[i - 1]) * base + text[i - 1]) % mod;
    }   

    int cnt = 0;
    for(int l = 1, r = m; r <= n; l++, r++){
        ll res = (pref[r] - (lll(pref[l - 1]) * pw[r - l + 1]) % mod + mod) % mod;
        if(res == hash) cnt++;
    }

    cout << cnt << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        Solve();
    }
    
    return 0;
}
