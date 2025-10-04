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
        int x, y, k; cin >> x >> y >> k;
        int t = max(min(x, k), min(y, k));
        if(x >= y){
            x -= t;
            if(x < t + 1 and y < t + 1){
                cout << "Alice";
            }
            else cout << "Bob";
        }
        else if(y > x){
            y -= t;
            if(x < t + 1 and y < t + 1){
                cout << "Alice";
            }
            else cout << "Bob";
        }
        cout << endl;
    }
    
    return 0;
}