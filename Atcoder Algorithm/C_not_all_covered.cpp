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
    
    int n, m; cin >> n >> m;
    vector<ll> v(n + 2, 0);
    while(m--){
        int l, r; cin >> l >> r;
        v[l]++, v[r + 1]--;
    }
    ll mn = 1e14;
    for(int i = 1; i <= n; i++){
        v[i] += v[i - 1];
        mn = min(mn, v[i]);
    }
    cout << mn;
    
    return 0;
}