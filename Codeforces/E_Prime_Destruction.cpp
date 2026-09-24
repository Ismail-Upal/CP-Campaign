#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 200004;
vector<ll> fact[N];
vector<bool> prime(N, 1);

void sieve(){
    prime[0] = prime[1] = 0;

    for(int i = 2; i * i < N; i++){
        if(prime[i]){
            for(int j = i * i; j < N; j += i){
                prime[j] = 0;
            }
        }
    }

    for(int i = 2; i < N; i++){
        if(prime[i]){
            for(int j = i; j < N; j += i){
                fact[j].push_back(i);
            }
        }
    }
}

void Solve(){
    int n, k; cin >> n >> k;
    
    vector<ll> dp(n + 1, 1e18);
    for(int i = 1; i <= n; i++){
        if(i <= k) dp[i] = 0;
        
        for(auto p : fact[i]){
            dp[i] = min(dp[i], dp[i / p] * p + 1);
        }
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ans += dp[x];
    }
    cout << ans << endl;
}

int main()
{   
    fast; sieve();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}                               

