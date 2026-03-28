#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void Solve(){
    ll n, m; cin >> n >> m;

    int ok = 0, X, Y;

    for(int i = 1; i <= n; i++){
        ll x = 1, y = i;
        ll z = 3 * y - 2 * x;
        while(z <= m){
            if(z == m){
                cout << 1 << " " << i << endl;
                return;
            }
            ll nxt = 3 * z - 2 * y;
            x = y;
            y = z;
            z = nxt;
        }
    }

    cout << -1 << endl;
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