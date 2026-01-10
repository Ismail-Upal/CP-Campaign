#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ans = (ans + k) % i;
    }

    cout << ans + 1 << "\n"; 
    return 0;
}
