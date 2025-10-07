#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}
int main()
{   
    opt();
    
    ll n; cin >> n;
    ll div = 1;
    for(int i = 2; i <= 10; i++) div = lcm(div, i);
    cout << n / div;
    
    return 0;
}