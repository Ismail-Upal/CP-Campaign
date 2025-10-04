#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll k, x; 
        cin >> k >> x; 
        memset(dp, -1, sizeof dp);
        cout << rec(1 << k, 1 << k) << endl;
    }
    
    return 0;
}