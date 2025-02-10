#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        sort(b.begin(), b.end());
        a[0] = min(*upper_bound(b.begin(), b.end(), a[0] - 1) - a[0], a[0]);
        int ok = 1;
        for(int i = 1; i < n; i++){
            int nd = a[i - 1] + a[i];
            int x = *upper_bound(b.begin(), b.end(), nd - 1);
            int mn = min(a[i], x - a[i]);
            int mx = max(a[i], x - a[i]);
            if(mn >= a[i - 1]) a[i] = mn;
            else if(mx >= a[i - 1]) a[i] = mx;
            else ok = 0;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}