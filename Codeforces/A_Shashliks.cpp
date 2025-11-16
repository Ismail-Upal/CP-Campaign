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
        ll k, a, b, x, y; cin >> k >> a >> b >> x >> y;
        ll ans = 0;
        if(x <= y){
            if(k >= a){ 
                ll d = (k - a) / x; d++;
                ans += d;
                k -= d * x; 
            }
            if(k >= b){
                ll d = (k - b) / y; d++;
                ans += d;
                k -= d * y;
            }
        }
        else{
            if(k >= b){
                ll d = (k - b) / y; d++;
                ans += d;
                k -= d * y;
            }
            if(k >= a){
                ll d = (k - a) / x; d++;
                ans += d;
                k -= d * x;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}