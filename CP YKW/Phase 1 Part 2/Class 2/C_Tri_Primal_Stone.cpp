#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
bool prime(int n){
    if(n == 2) return true;
    if(n == 1 or n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}
int32_t main()
{   
    opt();
    
    tc{
        ll x; cin >> x;
        ll tmp = sqrt(x);
        if(tmp * tmp == x and prime(tmp)) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    
    return 0;
}

