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
    
    ll n; cin >> n;
    ll ans = 0, i = 0;
    while(ans <= n){
        if((1 << i) <= n){
            ans = (1 << i); 
            i++;
        }
        else break;
    }
    cout << ans ;
    
    return 0;
}