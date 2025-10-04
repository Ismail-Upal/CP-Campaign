#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'

//-------------------------------------------

int main()
{   
    opt();
    
    tc {
        ll n, m; 
        cin >> n >> m;

        ll ans = 0;       
        ll t = 0, s = 0;         
        while(n--) {
            ll a, b; 
            cin >> a >> b;

            ll gap = a - t; 

            if(b == s){
                ans += gap - (gap % 2);   
            }
            else{
                ans += gap - ((gap % 2) ^ 1); 
                s = b; 
            }

            t = a; 
        }
        ll gap = m - t;
        ans += gap;

        cout << ans << endl;
    }
    
    return 0;
}