#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= n; i++) cin >> v[i];

    ll tot = v[1] + 2 * v[2];

    for(ll i = 3; i <= n; i++){
        if(k >= i - 1) tot += (1ll << (i - 1)) * v[i];
        else tot += (((i - 1) * k) + 1) * v[i];
    }

    if(tot % 2) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}   
        a b c d e
k = 1   a 2b 3c 4d 5e
k = 2   a 2b 4c 7d 12e
k = 3   a 2b 4c 8d 15e 
k = 4   a 2b 4C 8d 16e



a b c d e 
a+e b+e c+e d+e
a+e+d+e b+e+d+e c+e+d+e 
a+e+d+e+c+e+d+e b+e+d+e+c+e+d+e 
a+e+d+e+c+e+d+e+b+e+d+e+c+e+d+e