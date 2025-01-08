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
        ll n, a, b, c; cin >> n >> a >> b >> c;
        ll need = n / (a+b+c);
        ll ans = 3*need;
        ll total = need * (a+b+c);
        if(total < n){
            total += a;
            ans++;
        }
        if(total < n){
            total += b;
            ans++;
        }
        if(total < n){
            ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}