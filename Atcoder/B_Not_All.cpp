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
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    int ans = 0;
    for(int i = n - 1; i >= 0; i--){
        if(mp.size() < m) break;
        mp[v[i]]--;
        if(mp[v[i]] == 0) mp.erase(v[i]);
        ans++;
    }

    cout << ans << endl;
    
    return 0;
}