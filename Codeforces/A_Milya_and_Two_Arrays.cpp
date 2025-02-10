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
    
    tc{
        int n; cin >> n;
        vector<int> v(n), b(n), c(n);
        map<int, int> mp1, mp2;
        for(int i = 0; i < n; i++) cin >> v[i], mp1[v[i]]++;
        for(int i = 0; i < n; i++) cin >> b[i], mp2[b[i]]++;
        if(sz(mp2) + sz(mp1) <= 3) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}