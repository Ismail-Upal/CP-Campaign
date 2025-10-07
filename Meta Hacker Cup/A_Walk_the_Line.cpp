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
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll ans = (2 * v[0] * (n - 2)) + v[0];

        if(n == 1 and v[0] > k) ans = 1e18;
        if(ans <= k) cout << "Case #" << _ << ": " << "YES" << endl;
        else cout << "Case #" << _ << ": " << "NO" << endl;
    }
    
    return 0;
}