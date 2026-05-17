#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
    ll a = random(0, 100), n = 2;
    cout << a << " " << n << endl;
    
    
        ll x = random(0, 8);
        ll y = random(x + 1, 9);
        cout << x << " " << y << endl;
    

    return 0;
}

