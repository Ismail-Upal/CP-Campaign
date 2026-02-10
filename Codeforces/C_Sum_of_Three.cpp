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
        ll n; cin >> n;
        ll m = n - 3;
        ll a = 1, b = 2;
        if(m % 3 == 0) m -= 2, b += 2;
        if(n <= 6 or b == m) cout << "NO" << endl;
        else cout << "YES" << endl << a << " " << b << " " << m << endl;
    }
    
    return 0;
}
