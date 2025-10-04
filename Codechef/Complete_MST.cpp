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
        int n; cin >> n;
        int r = 0, b = 0, z = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == 1) r++;
            if(x == 2) b++;
            else z++;
        }
        if((abs(r - b) + z) % 2 == 0) cout << 
    }
    
    return 0;
}