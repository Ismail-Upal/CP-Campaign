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
    
    int n; cin >> n;
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    ll ans = 0;
    for(int i = n - 2; i >= 0; i--){
        if(v[i] > v[i + 1]) ans += v[i] - v[i + 1], v[i] = v[i + 1];
    }
    cout << ans <<endl;
    
    return 0;
}