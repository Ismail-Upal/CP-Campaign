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
    cout << n << " ";
    while(n > 1){
        if(n & 1) n = (n * 3) + 1;
        else n = n / 2;
        cout << n << " ";
    }
    cout << endl;
    return 0;
}