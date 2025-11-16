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
        sort(v.rbegin(), v.rend());
        ll ok = 1;
        for(ll i = 0; i < n; i++){
            if(ok and v[0] == v[1]){
                cout << v[0] << " " << v[n - 1] << ' ';
                n--; 
            }
            else cout << v[i] << " ";
            ok = 0;
        }
        cout << endl;
    }
    
    return 0;
}