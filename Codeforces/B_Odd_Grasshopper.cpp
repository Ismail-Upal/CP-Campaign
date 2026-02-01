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
        ll x, n; cin >> x >> n;
        ll limit = n % 4;
        ll jump = n - limit + 1;
        while(limit--){
            // cout << jump << endl;
            if(x & 1) x += jump++;
            else x -= jump++;
        }
        cout << x << endl;
    }
    
    return 0;
}