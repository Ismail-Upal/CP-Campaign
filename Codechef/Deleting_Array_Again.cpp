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
        vector<int> a(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> c[i];
        
        int ans = 0, mn = 1e9;
        for(int i = 0; i < n; i++){
            mn = min(mn, c[i]);
            ans += a[i] * mn;
        }

        cout << ans << endl;
    }
    
    return 0;
}