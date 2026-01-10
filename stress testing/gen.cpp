#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
    ll n = random(1, 100000000000); 
    ll m = random(1, 100000000000); 
    cout << n << " " << m << endl;

    return 0;
}

