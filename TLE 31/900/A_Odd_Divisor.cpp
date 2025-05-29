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
        while(n % 2 ==0){
            n /= 2;
        }
        if(n > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}