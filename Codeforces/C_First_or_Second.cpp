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
        ll n; cin >> n;
        vector<ll> v(n + 1);
        for(ll i = 1; i <= n; i++){
            cin >> v[i];
        }

        vector<ll> suff(n + 1);
        suff[n] = 0;
        for(ll i = n - 1; i >= 1; i--){
            suff[i] = suff[i + 1] - v[i + 1]; 
        }
       

        ll ans = max(suff[1], v[1] + suff[2]);
        ll x = v[1], y = v[2], baki = -1, sum = 0;

        for(ll i = 3; i <= n; i++){
            if(x >= 0){
                if(y >= 0){
                    sum += x;
                    x = y;
                    y = v[i];
                    ll add;
                    if(y <= 0) add = max(x, abs(y));
                    else add = x;
                    ans = max(ans, sum + suff[i] + add);
                }
                else{
                    sum += abs(y);
                    y = v[i];
                    ll add;
                    if(y <= 0) add = max(x, abs(y));
                    else add = x;
                    ans = max(ans, sum + suff[i] + add);
                }
            }
            else{
                if(y <= 0){
                    sum += abs(y);
                    y = v[i];
                    ll add;
                    if(y <= 0) add = abs(y);
                    else add = -min(abs(x), y);
                    ans = max(ans, sum + suff[i] + add);
                }
                else{
                    sum += x;
                    x = y;
                    y = v[i];
                    ll add;
                    if(y >= 0) add = x;
                    else add = max(x, abs(y));
                    ans = max(ans, sum + suff[i] + add);
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}