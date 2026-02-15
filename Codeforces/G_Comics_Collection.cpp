#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll lcm(ll a, ll b){
    return a * b / __gcd(a, b);
}

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        ll a = n / 5;
        ll b = (n / 3) - (n / lcm(3, 5));
        ll c = (n / 2) - (n / lcm(2, 5)) - (n / lcm(2, 3)) + (n / lcm(2, (lcm(3, 5))));
        ll d = n - a - b - c;

        a *= 5, b *= 3, c *= 2;
        // cout << a << " " << b << " " << c << " " << d << endl;
        cout << a + b + c + d << endl;
    }
    
    return 0;
}
