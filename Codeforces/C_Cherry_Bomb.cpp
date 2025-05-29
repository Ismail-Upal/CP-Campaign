#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> a(n), b(n);
        ll all = 1;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] >= 0) all = 0;
        }
        
        if(all){
            sort(a.begin(), a.end());
            ll mx = a[n - 1], mn = a[0];
            cout << k - (mx - mn) + 1 << endl;
        }
        else{
            set<ll> se;
            for(ll i = 0; i < n; i++){
                if(b[i] == -1) continue;
                ll sum = a[i] + b[i];
                se.insert(sum);
            }
            if(se.size() > 1){
                cout << 0 << endl;
                continue;
            }
            ll ok = 1, need = *se.begin();
            for(ll i = 0; i < n; i++){
                if(b[i] != -1) continue;
                ll tmp = need - a[i];
                if(tmp < 0 or tmp > k){
                    ok = 0; break;
                }
            }
            if(ok) cout << 1 << endl; 
            else cout << 0 << endl;
        }
    }
    
    return 0;
}