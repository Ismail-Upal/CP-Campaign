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
        int n, m, k; cin >> n >> m >> k;
        int cut_r = (k + n - 1) / n, cut_u = (k + m - 1) / m;
        
        int ans = 0;;
        if(cut_r < m){
            ans = max(ans, n * (m - cut_r));
        }
        if(cut_u < n){
            ans = max(ans, m * (n - cut_u));
        }

        cout << ans << endl;
    }
    
    return 0;
}