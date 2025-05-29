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
        int n, m, p, q; cin >> n >> m >> p >> q;
        if(n % p == 0){
            if((n / p) * q == m) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    
    return 0;
}