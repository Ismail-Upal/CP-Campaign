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
 
    ll n; cin >> n;
    int i = 0;
    ll ans = 0, x = 1;
    while(x <= n){
        i++;
        x = pow(5, i);
        ans += n / x;
    }    
    cout << ans ;
    return 0;
}