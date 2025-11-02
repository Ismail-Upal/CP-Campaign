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
    
    ll a; cin >> a;
    if(a <= 2){
        cout << -1 ;
        return 0;
    }
    
    if(a % 2){
        ll b = (a * a - 1) / 2;
        ll c = (a * a + 1) / 2;
        cout << b << " " << c;
    }
    else{
        ll x = a / 2;
        ll b = x * x - 1;
        ll c = x * x + 1;
        cout << b << " " << c;
    }   
    
    return 0;
}