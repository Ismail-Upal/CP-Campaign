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
        ll n; cin >> n;
        ll ans = 0;
        while(n > 0){
            if(n <= 2){
                break;
            }
            int a = n / 3;
            ans += a;
            if(n % 3 == 0){
                n -= 3 * a;
                n = a;
            }
            else if(n % 3 == 1){
                n -= 3 * a + 1;
                n = a + 1;
            }
            else if(n % 3 == 2){
                n -= 3 * a + 2;
                n = a + 2;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}