#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll lcm(ll a, ll b){
    return (a / __gcd(a, b)) * b;
}

void Solve(){
    ll n; cin >> n;
    string s; cin >> s;
    ll plus = count(s.begin(), s.end(), '+');
    ll mins = n - plus;

    int q; cin >> q;
    while(q--){
        ll a, b; cin >> a >> b;
        ll x = lcm(a, b) / a;
        ll y = lcm(a, b) / b;

        if(plus == mins or (x + y) % abs(plus - mins) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}