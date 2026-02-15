#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
    ll n = random(4982662, 100000000);
    cout << n << endl;

    return 0;
}

