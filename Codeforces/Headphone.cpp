#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, h, c; cin >> n >> h >> c;

    ll sec = h + c;
    if(sec >= n){
        cout << n * n ;
        return;
    }
    ll ans = sec * sec;
    n -= sec;

    ll d = n / (h + h);
    ans += d * h * h;

    n %= (h + h);
    
    ans += (n / 2) * (n / 2);
    
    cout << ans ;
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