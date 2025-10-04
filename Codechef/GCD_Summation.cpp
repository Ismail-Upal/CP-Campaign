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
        int n, k; cin >> n >> k;
        
        int nd = n - 2;
        k -= nd;
        if(k <= 0){
            cout << -1 << endl; continue;
        }
        cout << k << " " << 2 * k << " ";
        int x = 2 * k; x++;
        while(nd--){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
    
    return 0;
}