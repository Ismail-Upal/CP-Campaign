#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

void Solve(){
    ll a, b, c, m; cin >> a >> b >> c >> m;
    ll all = m / lcm(a, lcm(b, c));

    ll alc = m / a, bob = m / b, car = m / c;
    alc *= 6, bob *= 6, car *= 6;

    alc = alc - (all * 6) + (all * 2);
    bob = bob - (all * 6) + (all * 2);
    car = car - (all * 6) + (all * 2);

    ll ab = (m / lcm(a, b)) - all, ac = (m / lcm(a, c)) - all;
    ll bc = (m / lcm(b, c)) - all;

    alc = alc - (ab * 6) - (ac * 6) + (ab * 3) + (ac * 3);
    bob = bob - (ab * 6) - (bc * 6) + (ab * 3) + (bc * 3);
    car = car - (ac * 6) - (bc * 6) + (ac * 3) + (bc * 3);

    cout << alc << " " << bob << " " << car << endl;
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