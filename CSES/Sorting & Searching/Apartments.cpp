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
    
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> v(n), b(m);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int j = 0; j < m; j++) cin >> b[j];

    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    int j = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(b[j] >= v[i] - k and b[j] <= v[i] + k and j < m){
            ans++; j++;
        }
        else if(v[i] > b[j] + k and j < m) j++, i--;
    }
    cout << ans;
    
    return 0;
}