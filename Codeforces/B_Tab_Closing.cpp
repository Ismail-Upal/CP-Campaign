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
        ll a, b, n; cin >> a >> b >> n;
        
        auto ok = [&](ll m){
            return m * b <= a;
        };

        ll l = 0, r = n, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        if(ans == n or b == a) cout << 1 << endl;
        else cout << 2 << endl ;
    }
    
    return 0;
}