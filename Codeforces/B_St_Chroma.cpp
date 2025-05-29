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
        int n, x; cin >> n >> x;
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        int mx = 0;
        for(int i = 0; i < n - 1; i++){
            if(mx == x) mx++;
            cout << mx++ << " ";
        }
        cout << min(x, mx) << endl;
    }
    
    return 0;
}