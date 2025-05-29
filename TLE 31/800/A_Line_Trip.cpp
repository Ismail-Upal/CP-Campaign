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
        int n, x; cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int ans = 0, cur = 0;
        for(int i = 0; i < n; i++){
            int d = v[i] - cur;
            ans = max(ans, abs(d));
            cur = v[i];
        }
        int d = abs(v[n - 1] - x) * 2;
        cout << max(ans, d) << endl;
    }
    
    return 0;
}