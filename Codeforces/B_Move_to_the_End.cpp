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
        vector<ll> v(n);
        multiset<ll> se;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            se.insert(v[i]);
        }
        reverse(v.begin(), v.end());
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            ll ans = sum + *se.rbegin();
            cout << ans << " ";
            sum += v[i - 1];
            se.erase(se.find(v[i - 1]));
        }
        cout << endl;
    }
    
    return 0;
}