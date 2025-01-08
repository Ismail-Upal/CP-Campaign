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
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        bool ok = 0;
        for(int i = 0; i < n - 1; i++){
            if(2 * v[i] > v[i + 1] and 2 * v[i + 1] > v[i]) ok = 1;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}