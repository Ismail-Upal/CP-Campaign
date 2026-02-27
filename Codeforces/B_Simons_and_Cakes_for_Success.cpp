#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    
    set<int> se;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            n /= i;
            se.insert(i);
        }
        
        if(n == 0) break;
    }
    if(n > 0) se.insert(n);
    
    ll ans = 1;
    for(auto i : se) ans *= i;
    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}