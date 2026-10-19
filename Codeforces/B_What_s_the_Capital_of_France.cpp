#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    sort(v.rbegin(), v.rend());

    ll ans = v[0];

    while(1){
        ll pos = 0;
        ll x = v[0];
        while(x >>= 1) pos++;

        if(v[n - 1] < (1 << pos)){
            for(int i = 0; i < pos; i++){
                ans |= (1 << i);
            }

            cout << ans << endl;
            return;
        }
        
        
        for(int i = 0; i < n; i++){
            v[i] -= (1 << pos);
        }
    }

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