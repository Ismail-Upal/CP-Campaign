#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int q; cin >> q;
    ll vol = 0, on = 0;
    while(q--){
        int a; cin >> a;
        if(a == 1){
            vol++;
        }
        if(a == 2){
            vol = max(vol - 1, 0ll);
        }
        if(a == 3){
            on = on ^ 1;
        }
        // cout << on << " " << vol << endl;
        if(on and vol >= 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}