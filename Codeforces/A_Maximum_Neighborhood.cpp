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
        int n; cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x = n * (i - 1) + j, l = 0, r = 0, u = 0, d = 0;
                if(j - 1 >= 1) l = x - 1;
                if(j + 1 <= n) r = x + 1;
                if(i - 1 >= 1) u = x - n;
                if(i + 1 <= n) d = x + n;
                ans = max(ans, l + r + u + d + x);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}