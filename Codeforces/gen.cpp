#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
inline ll gen_random(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}

// inline double gen_random(double l, double r) {
//     return uniform_real_distribution<double>(l, r)(rng);
// }

int main()
{   
    opt();
    freopen("in.txt", "w", stdout);

    // int n = gen_random(1, 5);
    // cout << n << endl;

    // for(int i = 0; i < n; i++){
    //     cout << gen_random(-20, 20) << " ";
    // }
    // cout << endl;
    
    ll x = gen_random(0, 1e9), y = gen_random(0, 1e9), k = gen_random(1, 1e9);
    cout << x << " " << y << " " << k << endl;
    
    return 0;
}