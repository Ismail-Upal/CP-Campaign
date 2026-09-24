#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    

        int n, m; cin >> n >> m;
        map<int, int> mp;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            mp[x]++;
        }
        cout << n - sz(mp) << endl;
        for(int i = 1; i <= n; i++){
            if(mp.find(i) == mp.end()) cout << i << " ";
        }
    
    
    return 0;
}