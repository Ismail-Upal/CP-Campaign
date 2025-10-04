#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> a(n + 1), b(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++) cin >> b[i];

        ll sum = 0;
        ll i = n + 1;
        while(i >= 1){
            if(i - 1 <= m) break;
            if(a[i - 1] <= b[i - 1]){
                sum += a[i - 1]; i--; 
            }
            else{
                sum += b[i - 1]; i--;
            }
        }

        ll tmp = 0, mn = 1e18;
        for(ll i = m; i >= 1; i--){
            if(i + 1 <= m) tmp += b[i + 1];
            mn = min(mn, a[i] + tmp);
        }

        cout << sum + mn << endl;
    }
    
    return 0;
}