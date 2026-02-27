#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll x, y; cin >> x >> y;
    if(y > 0){
        x -= 2 * y; 
    }
    else if(y < 0){
        x += 4 * y;
    }

    if(x >= 0 and x % 3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}