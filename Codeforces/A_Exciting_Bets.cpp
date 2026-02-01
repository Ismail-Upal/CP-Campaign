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
        ll a, b; cin >> a >> b;
        if(a < b) swap(a, b);
        if(a == b){
            cout << "0 0" << endl; continue;
        }
        ll mxg = a - b;
        ll c = a % mxg;
        cout << mxg << " " << min(c, mxg - c) << endl;
    }
    
    return 0;
}