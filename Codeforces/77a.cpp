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
        int ans = 0;
        while(abs(a - b) >= 2 * c){
            if(a >= b) a -= c, b += c;
            else a += c, b -= c;
            ans++;
        }
        if(a != b) ans++;
        cout << ans << endl;
    }
    
    return 0;
}