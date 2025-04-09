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
        int z = 3, o = 1, t = 2, tr = 1, f = 1;
        int ok = 0, ans = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
          
            if(x == 0 and z > 0) z--;
            if(x == 1 and o > 0) o--;
            if(x == 2 and t > 0) t--;
            if(x == 3 and tr > 0) tr--;
            if(x == 5 and f > 0) f--;

            if(z + o + t + tr + f == 0 and !ok) ans = i + 1, ok = 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}