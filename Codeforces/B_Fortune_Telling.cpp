#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, x, z; cin >> n >> x >> z;
    ll y = x + 3;

    for(ll i = 0; i < n; i++){
        ll j; cin >> j;
        x += j, y += j;
    }

    if(x % 2 == z % 2) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}