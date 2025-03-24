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
        int l, r, d, u; cin >> l >> r >> d >> u;
        if(l == r and r == d and d == u) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}