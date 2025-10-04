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
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        if(a[n - 1] != b[n - 1]){
            cout << "NO" << endl; continue;
        }

        int ok = 1;
        for(int i = n - 2; i >= 0; i--){
            if(a[i] == b[i]) continue;
            if((a[i] ^ a[i + 1]) == b[i] or (a[i] ^ b[i + 1]) == b[i]){
                ok = 1;
            }
            else{
                ok = 0; break;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}