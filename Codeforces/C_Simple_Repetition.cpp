#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool is_prime(int n){ 
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
    cerr << is_prime(22222) ;
    tc{
        int x, k; cin >> x >> k;
        if(x == 1 and k == 2) cout << "YES" << endl;
        else if(is_prime(x) and k == 1) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    
    return 0;
}