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
        int a, b, c; cin >> a >> b >> c;
        a += c % 2;
        if(a > b) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    
    return 0;
}