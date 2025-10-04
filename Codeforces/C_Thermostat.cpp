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
        ll l, r, x; cin >> l >> r >> x;
        ll a, b; cin >> a >> b;

        if(a == b){
            cout << 0 << endl; continue;
        }
        if(abs(a - b) >= x){
            cout << 1 << endl; continue;
        }

        if(a < b){
            if(a - x >= l) cout << 2 ;
            else if(b + x <= r) cout << 2 ;
            else if(b - l >= x and r - a >= x) cout << 3 ;
            else cout << -1 ;
            cout << endl; continue;
        }
        if(a > b){
            if(r - a >= x) cout << 2 ;
            else if(b - l >= x) cout << 2 ;
            else if(a - x >= l and r - b >= x) cout << 3 ;
            else cout << -1 ;
            cout << endl; continue;
        }
    }
    
    return 0;
}