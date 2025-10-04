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
        ll n, x, y; cin >> n >> x >> y;
        vector<ll> v(x);
        for(ll i = 0; i < x; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        vector<ll> dif;
        for(ll i = 1; i < x; i++){
            dif.push_back(v[i] - v[i - 1] - 1);
        }
        ll d = n - v[x - 1] + v[0] - 1;
        dif.push_back(d);
        sort(dif.begin(), dif.end());
        
        ll ans = 0;
        for(auto d : dif){
            if(d <= 1){
                ans += d; continue;
            }
            if(d % 2){
                if((d / 2) <= y){
                    ans += (d / 2) + 1;
                    y -= d / 2, x += d / 2;
                }
                else{
                    ans += y, x += y;
                    y = 0;
                    break;
                }
            }
        }
        // cout << ans << " " << y ;
        for(auto d : dif){
            if(y == 0) break;
            if(d % 2 == 0){
                if((d / 2) <= y){    
                    ans += d / 2;
                    y -= d / 2, x += d / 2;
                }
                else{
                    ans += y, x += y;
                    break;
                }
            }
        }
        
        ans += x - 2;
        cout << ans << endl;
    }
    
    return 0;
}