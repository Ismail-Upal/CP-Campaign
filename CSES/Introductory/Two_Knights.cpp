#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
ll fact(ll n){
    ll ans = 1;
    for(ll i = 1; i <= n; i++) ans *= i;
    return ans;
}
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    for(ll i = 1; i <= n; i++){
        ll j = i*i;
        cout << fact(j) / (fact(2) * fact(j - 2)) << endl;
    }
    
    return 0;
}