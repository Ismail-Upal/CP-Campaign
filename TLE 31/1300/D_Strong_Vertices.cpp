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
        int n; cin >> n;
        vector<ll> a(n), b(n), diff(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        ll mx = -1e18;
        for(int i = 0; i < n; i++){
            diff[i] = a[i] - b[i];
            mx = max(mx, diff[i]);
        }
        vector<ll> ans;
        for(int i = 0; i < n; i++){
            if(diff[i] == mx) ans.push_back(i + 1);
        }
        cout << sz(ans) << endl;
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}