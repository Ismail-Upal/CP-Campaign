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
    
    tc{
        ll a, b; cin >> a >> b;
        if(b == a){
            cout << 0 << endl;
            continue;
        }
        int bit = 0;
        int y = a;
        while(y > 0){
            bit++;
            y /= 2;
        }
        int b1 = 0;

        ll x = 0;
        for(ll i = 0; i < bit; i++){
            if(!(a & (1 << i))){
                x |= (1 << i);
            }
            b1 |= (1 << i);
        }

        if(b > b1){
            cout << -1 << endl; continue;
        }

        a |= x; 

        if(a == b){
            cout << 1 << endl;
            cout << x << endl;
            continue;
        }

        y = 0;
        for(ll i = 0; i < 32; i++){
            if((a & (1 << i)) and !(b & (1 << i))){
                y |= (1 << i);
            }
        }

        cout << 2 << endl << x << " " << y << endl;
    }
    
    return 0;
}