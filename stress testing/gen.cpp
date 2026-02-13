#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
    ll n = random(1, 5), k = random(0, 10);
    cout << n << " " << k << endl;
    for(int i = 0; i < n; i++){
        cout << random(1, 10) << " ";
    }
    cout << endl;

    return 0;
}

