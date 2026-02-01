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
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        int ans = 0;
        for(int i = 1; i <= n / 2; i++){
            if(v[i] == v[n - i + 1]) continue;
            ans = __gcd(ans, abs(v[i] - v[n - i + 1]));
        }
        
        cout << ans << endl;
    }
    
    return 0;
}