#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, v; cin >> n >> v;
    vector<ll> w(n + 1);
    for(int i = 1; i <= n; i++) cin >> w[i];

    ll ans = 0;
    for(int i = 1; i <= n - 2; i++){
        for(int j = i + 1; j <= n - 1; j++){
            for(int k = j + 1; k <= n; k++){
                if(i + j + k <= v){
                    ans = max(ans, w[i] + w[j] + w[k]);
                }
            }
        }
    }

    cout << ans;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}