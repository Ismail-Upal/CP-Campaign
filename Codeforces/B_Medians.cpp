#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        if(n == 1 and k == 1){
            cout << 1 << endl << 1 << endl;
            continue;
        }
        if(k == 1 or k == n){
            cout << -1 << endl;
            continue;
        }
        
        int lo = k - 1, hi = n - k;
        if(lo % 2 and hi % 2){
            cout << 3 << endl;
            cout << 1 << " " << k << " " << k + 1 << endl;
        }
        else{
            cout << 5 << endl;
            cout << 1 << " " << 2 << " " << k << " " << k + 1 << ' ' << k + 2 << endl; 
        }
    }
    
    return 0;
}