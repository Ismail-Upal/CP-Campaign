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
        int n, m, k; cin >> n >> m >> k;
        int a, b; cin >> a >> b;
        int ok = 1;
        while(k--){
            int x, y; cin >> x >> y;
            if((x + y) % 2 == (a + b) % 2) ok = 0;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}