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
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ans = 0 ;
    for(int i = 0; i < n; i++){
        int j = n - i - 1;
        ans = __gcd(ans, abs(v[i] - v[j]));
    }
    if(ans != 0) cout << ans ;
    else cout << -1 ;
    
    return 0;
}