#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 2e5;
vector<bool> prime(N, 1);
vector<ll> primes;

void sieve() {
    prime[0] = 0;
    for(ll i = 2; i * i <= N; i++){
        if(prime[i]){
            for(ll j = i * i; j <= N; j += i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        if(prime[i]) primes.push_back(i);
    }
}

void Solve(){
    ll n; cin >> n;
    n--;
    cout << primes[0] << " ";
    for(ll i = 1; n > 0 and i < sz(primes); i++){
        cout << primes[i] * primes[i - 1] << " ";
        n--;
    }
    cout << endl;
}

int main()
{   
    fast;
    ll t = 1;
    cin >> t;

    sieve();

    for(ll i = 1; i <= t; i++){
        Solve();
    }

    return 0;
}

