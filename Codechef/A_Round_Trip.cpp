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
        ll r, x, d, n; cin >> r >> x >> d >> n;
        string s; cin >> s;
        ll ans = 0, ok = 0;
        for(auto i : s){
            if(i == '1'){
                ans++;
                if(r >= x) r = max(x - 1, r - d);
                else r = min(x - 1, r + d);
                if(r == x - 1) ok = 1;  
            }
            if(i == '2'){
                if(r < x) ans++, r = min(x - 1, r + d);
                else{
                    if(ok) ans++;
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}