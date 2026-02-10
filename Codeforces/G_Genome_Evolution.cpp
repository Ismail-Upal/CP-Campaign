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
        ll a, b, t; cin >> a >> b >> t;
        ll ans = 0;
        if(t == 1) ans = a;
        else if(t == 2) ans = b;
        else{
            ans = a & b ;
        } 
        cout << ans << endl;
    }
    
    return 0;
}