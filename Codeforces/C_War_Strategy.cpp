#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, m, k; cin >> n >> m >> k;
        if(k > ((n + 1) / 2)) k = (n + 1) - k;
        ll i = 1, ans = 1;
        while(1){
            if(k + i > n) break;
            ll R = 2 * i - 1;
            if(R + i <= m){
                if(k - i >= 1) ans = max(ans, i + i + 1);
                else ans = max(ans, i + k);
            }
            else if(R <= m){
                if(k - (m - R) >= 1) ans = max(ans, i + (m - R) + 1);
                else ans = max(ans, i + k);
            }
            i++;
        }

        cout << ans << endl;
    }
    
    return 0;
}