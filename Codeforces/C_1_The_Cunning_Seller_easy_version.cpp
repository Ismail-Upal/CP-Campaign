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
            ll k = 0;
            ll x = ll(pow(3, k));
            while(n >= ll(pow(3, k))){
                x = ll(pow(3, k)); k++;
            }
            n -= x; k--;
            ans += ll(pow(3, k + 1)) + k * ll(pow(3, k - 1));
        }
        cout << ans << endl;
    }
    
    return 0;
}