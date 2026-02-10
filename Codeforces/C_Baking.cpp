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
    
    int a, b, c; cin >> a >> b >> c;
    if(a <= min(b, c)) cout << max(b, c) - a ;
    else if(a >= max(b, c)) cout << a - min(b, c);
    else cout << abs(b - c) + min(abs(a - c), abs(a - b));
    
    return 0;
}