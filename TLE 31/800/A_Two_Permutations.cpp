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
        int n, a, b; cin >> n >> a >> b;
        if(n - a - b >= 2) cout << "Yes\n";
        else if(n - a == 0 and n - b == 0) cout << "Yes\n";
        else cout << "No\n"; 
    }
    
    return 0;
}