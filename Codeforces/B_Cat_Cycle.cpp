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
        int ans = 0;
        if(n % 2){
            int m = n / 2;
            int round_hr = 1 + m * n;
            k = k % round_hr;
            
        }
        else{
            ans = k % n;
        }
        if(ans == 0) ans = n;
        cout << ans << endl;
    }
    
    return 0;
}