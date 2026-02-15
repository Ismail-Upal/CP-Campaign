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
        ll p, q; cin >> p >> q;

        if(p >= q){
            cout << "Alice" << endl;
            continue;
        }
        
        ll x = 2 * (q - p);
        ll y = x + (x / 2);
        // cout << x << " " << y ;
        if(x >= 2 and y >= 3 and x <= p and y <= q and p - x == q - y) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    
    return 0;
}