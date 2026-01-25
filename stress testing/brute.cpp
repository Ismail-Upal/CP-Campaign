
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main() {
    long long a, b;
    cin >> a >> b;
    

    long long ans =  (((a % mod) - (b % mod) + mod) % mod);

    cout << ans;

    return 0;
}
