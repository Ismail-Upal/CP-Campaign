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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int x; cin >> x;
        int ok = 1;
        v[0] = min(v[0], x - v[0]);
        for(int i = 1; i < n; i++){
            int mn = min(v[i], x - v[i]);
            int mx = max(v[i], x - v[i]);
            if(mn >= v[i - 1]) v[i] = mn;
            else if(mx >= v[i - 1]) v[i] = mx;
            else if(mx < v[i - 1]) ok = 0;
        }
        
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}