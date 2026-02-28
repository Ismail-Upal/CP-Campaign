#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e6 + 5;
int spf[N];

void smallest_prime_fact() {
    for(int i = 1; i < N; i++) spf[i] = i;

    for(int i = 2; i * i < N; i++){
        if(spf[i] == i){  // i is prime
            for(int j = i * i; j < N; j += i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
}

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(is_sorted(v.begin(), v.end())){
        cout << "Bob" << endl;
        return;
    }

    for(int i = n - 1; i >= 0; i--){
        if(spf[v[i]] == v[i]) continue;

        int x = v[i], f = spf[v[i]];

        while(x % f == 0) x /= f;
        if(x > 1){
            cout << "Alice" << endl;
            return;
        }
        else v[i] = f;
    }

    if(is_sorted(v.begin(), v.end())){
        cout << "Bob" << endl;
    }
    else cout << "Alice" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    smallest_prime_fact();
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}