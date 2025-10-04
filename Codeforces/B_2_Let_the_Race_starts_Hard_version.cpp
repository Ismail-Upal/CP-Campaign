#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;

ll pow(ll x, ll n, ll m) {
    ll ans = 1;
    x %= m;
    while (n > 0) {
        if (n & 1) ans = (__int128)ans * x % m;
        x = (__int128)x * x % m;
        n >>= 1;
    }
    return ans;
}

int main() {
    opt();
    
    ll a, b, c;
    cin >> a >> b >> c;

    ll sum;
    if (__builtin_add_overflow(a, b, &sum)) {
        cout << "ERR" << endl;
    } else {
        __int128 square = (__int128)sum * sum;
        if (square > LLONG_MAX || square < LLONG_MIN) cout << "ERR" << endl;
        else cout << (ll)square << endl;
    }

    if (a + b < 0) cout << "ERR" << endl;
    else cout << (ll)sqrtl((long double)(a + b)) << endl;

    if (c == 0 || b < 0) cout << "ERR" << endl;
    else cout << pow(a, b, c) << endl;

    return 0;
}
