#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()
   


void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    
    ll L = 0, R = 0;
    if(n == 1) cout << 0;
    if(n == 2){
        cout << v[1];
    }
    if(n == 3){
        ll x = 2 * v[1];
    }
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