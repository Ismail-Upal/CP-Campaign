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
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int od = 0, ev = 0;
        for(int i = 0; i < n; i++){
            if(v[i] % 2) od++;
            else ev++;
        }
        if(od % 2 == 0) cout << "YES" << endl;
        else if(od == 0 and ev > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}