#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, m; cin >> n >> m;
    set<ll> a;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        a.insert(x);
    }

    vector<ll> b(m);
    for(ll i = 0; i < m; i++) cin >> b[i];

    vector<int> div(n + m + 1);
    for(auto i : a){
        for(int j = i; j <= n + m; j += i){
            div[j]++;
        }
    }

    ll both = 0, alc = 0, bob = 0;
    for(auto i : b){
        if(div[i] == sz(a)) alc++;
        else if(div[i] == 0) bob++;
        else both++;
    }

    if(both % 2) alc++;
    if(alc > bob) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t = 1; cin >> t;
    for(ll i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}