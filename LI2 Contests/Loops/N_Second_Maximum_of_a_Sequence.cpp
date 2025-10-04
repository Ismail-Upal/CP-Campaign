#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    ll n, mx1 = LLONG_MIN, mx2 = LLONG_MIN;
    
    while(cin >> n and n != 0){
        if(n > mx1){
            mx2 = mx1;
            mx1 = n;
        }
        else if(n < mx1 and n > mx2) mx2 = n;
    }
    if(mx2 == LLONG_MIN) mx2 = mx1;
    cout << mx2;
    
    return 0;
}