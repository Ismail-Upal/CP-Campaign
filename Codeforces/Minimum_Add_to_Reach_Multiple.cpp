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
        ll a, b; cin >> a >> b;

        auto ok = [&](ll m){
            return a <= m;
        };

        ll l = b, r = 1e10, ans = -1, m;
        while(l <= r){
            m = l + (r - l) / 2;
            m = b * (m / b);
            if(ok(m)){
                ans = m;
                r = m - b;
            }
            else l = m + b;
        }

        cout << ans - a << endl;
    }
    
    return 0;
}

// 3 5
