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
    
    int n, k; cin >> n >> k;
    vector<ll> v(n + 1), pref(n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) pref[i] = pref[i - 1] + v[i];

    while(k--){
        int l, r; cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }
    
    return 0;
}