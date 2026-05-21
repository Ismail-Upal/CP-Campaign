#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, a, b; cin >> n >> a >> b;
    if(3 * a > b){
        ll ans = (n / 3) * b;
        n %= 3;
        if(n) ans += min(n * a, b);
        cout << ans << endl;
    }
    else{
        ll ans = (n / 3) * (3 * a);
        n %= 3;
        if(n) ans += min(n * a, b);
        cout << ans << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}