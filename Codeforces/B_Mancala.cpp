#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n = 28;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= 14; i++){
        cin >> v[i];
        v[i + 14] = v[i];
    }

    ll sum = 0;
    for(ll i = 1; i <= 14; i++){
        if(!v[i]) continue;
        ll x = v[i], s = 0, m = 14; 
        for(ll j = i + 1; j <= i + 14; j++){
            ll add = (x + m - 1) / m;
            x -= add; 
            if(j - 14 != i) add += v[j];
            if(add % 2 == 0) s += add;
            m--;
        } 
        sum = max(sum, s);
    }

    cout << sum;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}