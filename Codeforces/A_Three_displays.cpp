
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
    
    
        int n; cin >> n;
        vector<ll> a(n + 1), b(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

        ll ans = 1e17;
        for(int j = 2; j < n; j++){
            ll lo = 1e17, hi = 1e17;
            for(int i = 1; i < j; i++){
                if(a[i] < a[j]) lo = min(lo, b[i]);
            }
            for(int k = j + 1; k <= n; k++){
                if(a[j] < a[k]) hi = min(hi, b[k]);
            }

            if(lo != 1e17 and hi != 1e17){
                ans = min(ans, lo + b[j] + hi);
            }
        }
        
        if(ans == 1e17) ans = -1;
        cout << ans;
    
    return 0;
}