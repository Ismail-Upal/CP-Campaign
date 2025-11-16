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
        ll w, h, a, b; cin >> w >> h >> a >> b;
        ll a1, b1, x1, y1; cin >> a1 >> b1 >> x1 >> y1;
        ll a2 = a1 + a - 1, b2 = b1;
        ll a3 = a2, b3 = b1 + b - 1;
        ll a4 = a1, b4 = b3;


        ll x2 = x1 + a - 1, y2 = y1;
        ll x3 = x2, y3 = y1 + b - 1;
        ll x4 = x1, y4 = y3;

        // cout << x1 << x2 << x3 << x4 << endl;
        // cout << y1 << y2 << y3 << y4 << endl;

        int ok = 1;
        if(a2 < x1 and (b2 <= y1 and y1 <= b3) or (b2 <= y4 and y4 <= b3)){
            ll d = x1 - a2 - 1;
            if(d % a) ok = 0;
        }
        else if(b4 < y1 and (a4 <= x1 and x1 <= a3) or (a4 <= x2 and x2 <= a3)){
            ll d = b4 - y1 - 1;
            if(d % b) ok = 0;
        }
        else if(x2 < a1 and (b1 <= y2 and y2 <= b4) or (b1 <= y3 and y3 <= b4)){
            ll d = a1 - x2 - 1;
            if(d % a) ok = 0;
        }
        else if(b1 > y4 and (a1 <= x4 and x4 <= a2) or (a1 <= x3 and x3 <= a2)){
            ll d = y4 - b1 - 1;
            if(d % b) ok = 0;
        }
        else{
            if(a2 <= x1){
                ll d = x1 - a2 - 1;
                if(d % a) ok = 0;
            }
            else if(x2 <= a1){
                ll d = a1 - x2 - 1;
                if(d % 2) ok = 0;
            }
        }
        
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }    
    
    return 0;
}