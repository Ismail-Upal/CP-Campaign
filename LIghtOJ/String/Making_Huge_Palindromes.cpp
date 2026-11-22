#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()
#define lll __int128 
const ll mod = (1ll << 61) - 1;

ll Base(){
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    ll base = uniform_int_distribution<ll>(256, mod - 1)(rng) | 1;
    return base;
}

void Solve(){
    string s; cin >> s;
    string t = s;
    reverse(t.begin(), t.end());

    ll base = Base();
    int n = s.length();

    vector<ll> pw(n + 1, 0); pw[0] = 1;
    for(ll i = 1; i <= n; i++){
        pw[i] = (lll(pw[i - 1]) * base) % mod;
    }

    vector<ll> pref1(n + 1, 0), pref2(n + 1, 0);
    for(ll i = 1; i <= n; i++){
        pref1[i] = (lll(pref1[i - 1]) * base + s[i - 1]) % mod;
        pref2[i] = (lll(pref2[i - 1]) * base + t[i - 1]) % mod;
    }
    
    ll len = 0;
    for(int i = 1, j = 1, l = n, r = n; j <= n; j++, l--){
        ll hash1 = (pref1[r] - (lll(pref1[l - 1]) * pw[r - l + 1]) % mod + mod) % mod;
        ll hash2 = (pref2[j] - (lll(pref2[i - 1]) * pw[j - i + 1]) % mod + mod) % mod;
        
        if(hash1 == hash2) len = j;
    }

    cout << n + (n - len) << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": " ;
        Solve();
    }
    
    return 0;
}