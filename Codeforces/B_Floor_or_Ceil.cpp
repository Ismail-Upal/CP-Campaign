#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int x, n, m; cin >> x >> n >> m;
        int mn = x, mx = x;

        for(int i = 0; i < m and mn > 1; i++){
            mn = (mn + 2 - 1) / 2;
        }
        for(int i = 0; i < n and mn > 0; i++){
            mn /= 2;
        }

        for(int i = 0; i < n and mx > 0; i++){
            mx /= 2;
        }
        for(int i = 0; i < m and mx > 1; i++){
            mx = (mx + 2 - 1) / 2;
        }
        
        cout << mn << " " << mx << endl;
    }
    
    return 0;
}

