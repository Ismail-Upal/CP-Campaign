#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        ll n, x; cin >> n >> x;
        ll sum = 0, ok = 1;
        for(int i = 0; i < n; i++){
            int v; cin >> v;
            if(ok and ((sum | v) | x) == x){
                sum = (sum | v);
            }
            else ok = 0;
        }
        ok = 1;
        for(int i = 0; i < n; i++){
            int v; cin >> v;
            if(ok and ((sum | v) | x) == x){
                sum = (sum | v);
            }
            else ok = 0;
        }
        ok = 1;
        for(int i = 0; i < n; i++){
            int v; cin >> v;
            if(ok and ((sum | v) | x) == x){
                sum = (sum | v);
            }
            else ok = 0;
        }

        if(sum == x) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}