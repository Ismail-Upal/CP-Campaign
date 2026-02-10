#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool ok(ll n){
    set<int> se;
    while(n > 0){
        se.insert(n % 10);
        n /= 10;
    }
    for(auto i : se){
        if(i != 1 and i != 2) return 0;
    }
    return 1;
}

int main()
{   
    opt();
    
    ll n; cin >> n;
    ll x = 1 << n;
    
    ll l = 1, r = 0;
    for(int i = 2; i <= n; i++) l *= 10;
    r = l * 10;

    if(l % x){
        l = l - (l % x);
        l += x;
    }
    ll ans = -1;
    while(l <= r){
        if(l % x == 0 and ok(l)){
            cout << l << endl;
        }
        l += x;
    }
    
    cout << ans << endl;
    
    return 0;
}