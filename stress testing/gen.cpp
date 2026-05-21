#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
    ll a = random(0, 100000000000000000), n = random(1, 10);
    cout << a << " " << n << endl;
    int pre = -1;
    for(int i = 1; i <= n; i++){
        int x = random(pre + 1, n - (n - i) - 1);
        cout << x << " ";
        pre = x;
    }cout << endl; 

    return 0;
}

