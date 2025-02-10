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
        int n, a, b; cin >> n >> a >> b;
        if(a + 1 == b and a == 1) cout << "NO" << endl;
        else if(a == b + 1 and a == n) cout << "NO" << endl;
        else if(abs(b-a) % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}