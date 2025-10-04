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
    
    int n, l; cin >> n >> l;
    vector<int> v(n + 1), p(l + 1);
    v[1] = 1, p[1]++;
    for(int i = 2; i <= n; i++){
        int x; cin >> x;
        v[i] = (v[i - 1] + x) % l;
        if(v[i] == 0) v[i] = l;
        p[v[i]]++;
    }
    ll ans = 0;
    if(l % 3) ans = 0;
    else{
        int x = l / 3;
        for(int i = 1; i <= x; i++){
            ans += 1LL * p[i] * p[i + x] * p[i + x + x];
        }
        // for(int i = 1; i <= l; i++) cout << p[i] << ' ';
    }
    cout << ans ;
    
    return 0;
}