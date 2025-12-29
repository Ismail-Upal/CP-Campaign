#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
        ll ans = 0, mx = -1e18;
        for(int i = 0; i < n; i++){
            ans += max(a[i], b[i]);
            mx = max(mx, a[i] + b[i]);
        }
        ll add = -1e18;
        for(int i = 0; i < n; i++){
            if(a[i] + b[i] == mx){
                mx -= max(a[i], b[i]);
                add = max(add, mx);
                mx = a[i] + b[i];
            }
        }
        
        cout << ans + add << endl;
    }
    
    return 0;
}