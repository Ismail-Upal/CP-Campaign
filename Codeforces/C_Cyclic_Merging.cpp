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
        ll n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        v.push_back(v[0]);
        ll ans = 0, mx = 0;
        for(int i = 0; i < n; i++){
            ll add = max(v[i], v[i + 1]);
            ans += add;
            mx = max(mx, add);
        }

        cout << ans - mx << endl;
    }
    
    return 0;
}