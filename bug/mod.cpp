#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long mod = 1e9+7;

    long long ans =  (((a % mod) - (b % mod) + mod) % mod);

    cout << ans;

    return 0;
}
