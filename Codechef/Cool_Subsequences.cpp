#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int ans = -1;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] >= 2) ans = v[i];
        }
        if(ans != -1){
            cout << 1 << endl << ans << endl;
        }
        else cout << -1 << endl;
        
    }
    
    return 0;
}