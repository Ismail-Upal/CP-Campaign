#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 1e6 + 5;
int spf[N];
void smallest_prime_factor(){
    for(ll i = 2; i < N; i++) spf[i] = i;

    for(ll i = 2; i * i < N; i++){
        if(spf[i] == i){
            for(ll j = i * i; j < N; j += i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    map<ll, ll> oddP;

    for(ll i = 0; i < n; i++){
        cin >> v[i];
        set<ll> se;
        while(v[i] > 1){
            if(se.count(spf[v[i]])){
                se.erase(spf[v[i]]);
            }
            else se.insert(spf[v[i]]);

            v[i] /= spf[v[i]];
        }

        ll mul = 1;
        for(auto i : se){
            mul *= i;
        }
        
        oddP[mul]++;
    }

    map<ll, ll> mp;
    ll ans = 0;

    for(int i = 0; i < n; i++){
        set<ll> se;
        while(v[i] > 1){
            if(se.count(spf[v[i]])){
                se.erase(spf[v[i]]);
            }
            else se.insert(spf[v[i]]);

            v[i] /= spf[v[i]];
        }

        ll mul = 1;
        for(auto i : se){
            mul *= i;
            if(mul > 1e6) break;
        }

        if(mul <= 1e6) ans += oddP[mul];
    }

    cout << ans << endl;
}

int main()
{   
    fast; 
    smallest_prime_factor();
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}