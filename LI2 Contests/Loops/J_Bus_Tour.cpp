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
    
    int crs = 0;
    tc{
        int x; cin >> x;
        if(x <= 437 and !crs) crs = _;
    }
    if(crs) cout << "Crash " << crs ;
    else cout << "No crash";
    
    return 0;
}