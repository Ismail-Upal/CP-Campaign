#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, c; cin >> n >> c;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= n; i++) cin >> v[i];

    ll ans = 0, baki = 0;

    for(ll i = n; i >= 1; i--){
        if(baki >= v[i]){
            baki -= v[i];
            v[i] = 0;
            continue;
        }
        else{
            v[i] -= baki;
            baki = 0;
        }

        ll cnt = v[i] / c;
        ans += cnt * 2 * i;

        ll rem = v[i] % c;
        if(rem != 0){
            baki += c - rem;
            ans += 2 * i;
        }
    }

    cout << ans ;
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