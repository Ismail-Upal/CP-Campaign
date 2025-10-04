#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        if(k % 2){
            for(ll i = 0; i < n; i++){
                if(v[i] % 2) v[i] += k;
                else v[i] += k + k;
            }
        }
        else{
            ll g = 0;
            for(ll i = 0; i < n; i++){
                if(v[i] % 2){
                    v[i] = (v[i] * k) + v[i];
                    g = __gcd(v[i], g);
                }
            }
            for(ll i = 0; i < n; i++){
                if(v[i] % 2 == 0){
                    v[i] = (g * k) + v[i];
                }
            }
        }

        for(ll i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;

    }

    // for(ll i = 8; i <= 100000; i+= 5){
    //     if(i % 3 == 0) cout << i << "  " ;
    // }
    
    return 0;
}