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
        int cnt = 0;
        for(ll i = 2; i * i <= n; i++){
            while(n % i == 0){
                cnt++;
                n /= i;
            }
        }
        if(n > 1) cnt++;
        
        int ans = min(cnt, 3);
        if(ans == 0) ans = 1;
        cout << ans << endl;
    }
    
    return 0;
}