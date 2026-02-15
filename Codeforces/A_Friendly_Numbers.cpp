#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll sum(ll n){
    ll ans = 0;
    while(n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        int ans = 0;
        for(ll i = n + 1; i <= n + 100; i++){
            if(i - sum(i) == n) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}