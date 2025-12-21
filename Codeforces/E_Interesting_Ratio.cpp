#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e7 + 5;
bool prime[N], pref[N];

void sieve() {
    memset(prime, true, sizeof prime);

    prime[0] = prime[1] = false;

    for(int i = 4; i < N; i += 2) prime[i] = false;

    for(int i = 3; i * i < N; i += 2){
        if(prime[i]){
            for(int j = i * i; j < N; j += i << 1){
                prime[j] = false;
            }
        }
    }
}

int main()
{   
    opt();
    
    sieve();

    tc{
        int n; cin >> n;
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            if(prime[i]){
                ans += n / i;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}