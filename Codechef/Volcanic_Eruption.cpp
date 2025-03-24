#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, p; cin >> n >> p;
        vector<int> v(n), l(n), r(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        ll ok = 0, mx = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 0) ok = 1, mx = 0;
            else if(ok){
                ll k = (v[i] + p - 1) / p;
                mx = max(mx, k);
            }
            l[i] = mx;
        }
        ok = 0, mx = 0;
        for(int i = n - 1; i >= 0; i--){
            if(v[i] == 0)ok = 1, mx = 0;
            else if(ok){
                ll k = (v[i] + p - 1) / p;
                mx = max(mx, k);
            }
            r[i] = mx;
        }
        for(int i = 0; i < n; i++){
            if(l[i] == 0 or r[i] == 0) cout << max(l[i], r[i]) << " ";
            else cout << min(l[i], r[i]) << " ";
        }
        cout << endl;
    }
    
    return 0;
}