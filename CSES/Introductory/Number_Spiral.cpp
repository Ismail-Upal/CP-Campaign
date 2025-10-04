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
        ll r, c; cin >> r >> c;
        ll ans;
        if(r >= c){
            if(r & 1){
                ans = ((r - 1) * (r - 1)) + 1 + c - 1;
            }
            else{
                ans = (r * r) - (c - 1);               
            }
        }
        else{
            if(c & 1){
                ans = (c * c) - (r - 1);
            }
            else{
                ans = ((c - 1) * (c - 1)) + 1 + r - 1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}