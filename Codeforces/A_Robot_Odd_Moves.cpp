#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll a, b; cin >> a >> b;
    if(b - 1 > a){
        cout << -1 << endl;
        return;
    }

    if(b == a + 1){
        cout << a + 1 << endl;
        return;
    }

    int ans = b;
    int d = a - b;
    if(d % 2) ans += d + 1;
    else ans += d;
    cout << ans << endl;
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