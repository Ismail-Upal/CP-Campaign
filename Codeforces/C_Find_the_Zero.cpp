#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// #define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    int ans = 0;
    for(int i = 0; i <= n + 1; i += 3){
        cout << "? " << i + 1 << " " << i + 2 << endl;
        int x; cin >> x;
        if(x == 1){
            ans = i + 1; break;
        }

        cout << "? " << i + 2 << " " << i + 3 << endl;
        cin >> x;
        if(x == 1){
            ans = i + 2; break;
        }

        cout << "? " << i + 1 << " " << i + 3 << endl;
        cin >> x;
        if(x == 1){
            ans = i + 1; break;
        }
    }

    if(!ans){
        cout << "? " << 2 * n - 1 << " " << 2 * n << endl;
        int x; cin >> x;
        if(x) ans = 2 * n;
        else ans = 2 * n - 2;
    }

    cout << "! " << ans << endl;
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
