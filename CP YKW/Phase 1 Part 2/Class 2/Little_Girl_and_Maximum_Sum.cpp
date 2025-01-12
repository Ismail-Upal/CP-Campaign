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
    
    int n, q; cin >> n >> q;
    vector<ll> v(n+1), nv(n + 1), L(q+1), R(q+1);
    vector<pair<int, int>> rng(n+2, {0, 0});
    for(int i = 1; i <= n; i++) cin >> v[i];
    
    sort(v.begin()+1, v.end(), greater<int>());
    for(int i = 1; i <= q; i++){
        int l, r; cin >> l >> r;
        L[i] = l; R[i] = r;
        rng[l].first++;
        rng[r + 1].first--;
    }
    for(int i = 1; i <= n; i++){
        rng[i].first += rng[i-1].first;
        rng[i].second = i;
    }

    sort(rng.begin()+1, rng.end(), greater<pair<int,int>>());
    for(int i = 1; i <= n; i++) nv[rng[i].second] = v[i];
    for(int i = 1; i <= n; i++) nv[i] += nv[i - 1];

    ll sum = 0;
    for(int i = 1; i <= q; i++){
        sum += nv[R[i]] - nv[L[i] - 1]; 
    }
    cout << sum ;
    return 0;
}