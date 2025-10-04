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
    
    ll n; cin >> n;
    ll del = 9, dig = 1, start = 1;
    while(n > (del * dig)){
        n -= (del * dig);
        del *= 10; dig++;
        start *= 10;
    }   
   
    start += (n - 1) / dig;
    n = (n - 1) % dig;

    string s = to_string(start);
    cout << s[n] << endl;
    
    return 0;
}
