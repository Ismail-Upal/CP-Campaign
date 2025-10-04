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
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        ll same = 1;
        ll dif = v[0] - v[1];
        for(int i = 1; i < n - 1; i++){
            if(v[i] - v[i + 1] != dif) same = 0;
        }
        if(!same){
            cout << "NO" << endl; continue;
        }

        for(int i = 0; i < n; i++){
            if(dif > 0){
                v[i] -= dif * (n - i);
            }
            else{
                v[i] -= abs(dif) * (i + 1);
            }
        }
        if(v[0] >= 0 and v[0] % (n + 1) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}