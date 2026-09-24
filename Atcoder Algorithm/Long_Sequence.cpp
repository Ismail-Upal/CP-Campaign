#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k; cin >> n >> k;
    vector<vector<ll>> v(n + 1);
    for(int i = 1; i <= n; i++){
        ll l; cin >> l;
        v[i].resize(l + 1);
        for(int j = 1; j <= l; j++) cin >> v[i][j];
    }

    vector<ll> c(n + 1);
    for(int i = 1; i <= n; i++) cin >> c[i];

    for(int i = 1; i <= n; i++){
        ll del = c[i] * (sz(v[i]) - 1); 
        if(del < k) k -= del;
        else{
            k = k % (sz(v[i]) - 1);
            if(k == 0) k = sz(v[i]) - 1;
            cout << v[i][k];
            break;
        }
    }
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