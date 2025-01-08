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
    double ans = log2(n);
    if(abs(ans - (ll)ans) == 0) cout << "YES";
    else cout << "NO" ; 
    
    return 0;
}