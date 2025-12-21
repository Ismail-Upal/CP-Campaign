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
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll ans = 1e11;
        for(int i = 0; i < n - 1; i++){
            ans = min(ans, (v[i] & v[i + 1]) ^ (v[i] | v[i + 1]));
        }
        cout << ans << endl;
    }
    
    return 0;
}