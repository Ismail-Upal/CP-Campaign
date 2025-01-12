#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n; cin >> n;
    if(n % 2 == 0) cout << n - 4 << " " << 4 << endl;
    else cout << n - 9 << " " << 9 ;
    
    return 0;
}