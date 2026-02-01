#include <bits/stdc++.h>
using namespace std;
using ll =long long;

mt19937 rng;
ll random(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(rng);
}

int main(int argc, char* argv[]) {
    rng.seed(argc > 1 ? atoi(argv[1]) : chrono::steady_clock::now().time_since_epoch().count());
    
    ll n = random(1, 200000);
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) v[i] = i;
    int x = random(1, n), j = 1;
    do{
        if(j == x){
            for(int i = 1; i <= n; i++) cout << v[i] << " ";
            cout << endl;
            break;
        }
        j++;
    }
    while(prev_permutation(v.begin() + 1, v.end()));


    return 0;
}

