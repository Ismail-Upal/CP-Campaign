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
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<int> pref1(n, 0), pref2(n, 0);
        pref1[0] = a[0];
        pref2[0] = b[0];
        
        int mx = b[0];
        for(int i = 1; i < n; i++){
            pref1[i] = pref1[i - 1] + a[i];
            mx = max(mx, b[i]);
            pref2[i] = mx;
        }

        int ans = 0;
        for(int i = 0; i < n; i ++){
            if(i + 1 > k) break;
            int x = pref1[i];
            int y = (k - i - 1) * pref2[i];
            ans = max(ans, x + y);
        }
        cout << ans << endl;
    }
    
    return 0;
}