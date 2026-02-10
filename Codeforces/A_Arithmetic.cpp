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
        int a, b, c; cin >> a >> b >> c;
        if(a * b == c){
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else if(b * c == a){
            cout << "YES" << endl;
            cout << b << " " << c << " " << a << endl;
        }
        else if(c * a == b){
            cout << "YES" << endl;
            cout << c << " " << a << " " << b << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}