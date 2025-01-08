
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
    int ok = 1;
    if(n <= 1) ok = 0;
    for(ll i = 2; i*i <= n; i++){
        if(n % i == 0){
            ok = 0;
            break;
        }
    }
    if(!ok) cout << "NO";
    else cout << "YES" ;
    return 0;
}