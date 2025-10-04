#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'

const ll mod = 1e9 + 7;

ll power(ll x, ll n, ll mod) { // O(log n)
    ll ans = 1 % mod;
    while (n > 0) {
        if (n & 1) ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int main() {
    opt();

    tc {
        ll n, k;
        cin >> n >> k;

        const ll MAX_EXP = 16;
        const ll total = (1 << MAX_EXP); // 2^16 = 65536
        vector<ll> pows(MAX_EXP);
        vector<ll> v;

        // Precompute powers of n^i % mod
        for (ll i = 0; i < MAX_EXP; i++) {
            pows[i] = power(n, i, mod);
        }

        // Generate all subset sums
        for (ll mask = 0; mask < total; mask++) {
            ll sum = 0;
            for (ll i = 0; i < MAX_EXP; i++) {
                if (mask & (1 << i)) {
                    sum = (sum + pows[i]) % mod;
                }
            }
            v.push_back(sum);
        }

        sort(v.begin(), v.end());

        cout << v[k] << endl;
    }

    return 0;
}
