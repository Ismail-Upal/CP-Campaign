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
        int p, s, r; cin >> p >> s >> r;
        if(p == s and r != 1) cout << "Case " << _ << ": " << "No" << endl;
        else cout << "Case " << _ << ": " << "Yes" << endl;
    }
    
    return 0;
}