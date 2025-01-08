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
        ll n; cin >> n;
        ll ans = 1;
        
        while(n > 3){
            n = n / 4;
            ans *= 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}