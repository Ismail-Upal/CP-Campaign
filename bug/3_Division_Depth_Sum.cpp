#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll div(ll n){
    if(n == 0) return 0;
    ll ans = 0;
    while(n > 0){
        n /= 3;
        ans++;
    }
    return ans;
}
int main()
{   
    opt();
    
    ll l, r; cin >> l >> r;
    cout << div(r) - div(l - 1);
    
    return 0;
}