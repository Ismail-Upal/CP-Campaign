#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int a, b, c; cin >> a >> b >> c;
        ll v = 2*(a*b + b*c + c*a);
        cout << 1000 / v << endl;
    }
    
    return 0;
}