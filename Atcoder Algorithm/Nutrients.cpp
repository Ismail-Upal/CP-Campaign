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
    
    int n, m; cin >> n >> m;
    vector<int> v(m + 1);
    for(int i = 1; i <= m; i++) cin >> v[i];
    map<int, ll> mp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x; cin >> x;
            mp[j] += x;
        }
    }
    bool ok = 1;
    for(int i = 1; i <= m; i++){
        if(mp[i] < v[i]){
            ok = 0; break;
        }
    }
    if(ok) cout << "Yes" ;
    else cout << "No" ;
    
    return 0;
}