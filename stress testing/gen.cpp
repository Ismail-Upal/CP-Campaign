#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
<<<<<<< HEAD
    ll n = random(4982662, 100000000);
    cout << n << endl;
=======
    ll n = random(1, 5), k = random(0, 10);
    cout << n << " " << k << endl;
    for(int i = 0; i < n; i++){
        cout << random(1, 10) << " ";
    }
    cout << endl;
>>>>>>> e5493e5ffd4f1651dee823805fd3a5fac07b9b55

    return 0;
}

