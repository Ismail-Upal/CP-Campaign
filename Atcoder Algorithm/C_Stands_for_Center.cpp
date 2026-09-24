#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    string s; cin >> s;
    ll ans = 0;
    for(ll i = 0; i < sz(s); i++){
        if(s[i] == 'C'){
            ll mn = min(i + 1, sz(s) - i);
            ans += mn;
        }
    }
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