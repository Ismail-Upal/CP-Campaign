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
        int n; cin >> n;
        vector<ll> v(n + 1);
        ll g1 = 0, g2 = 0;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            if(i % 2) g1 = __gcd(g1, v[i]);
            else g2 = __gcd(g2, v[i]);
        }

        int ok = 1;
        if(g1 == 1 and g2 == 1){
            cout << 0 << endl; continue;
        }
        for(int i = 1; i <= n; i++){
            if(g1 == 1) break;
            if(i % 2){
                if(v[i] % g1 != 0){
                    ok = 0; break;
                }
            }
            if(i % 2 == 0){
                if(v[i] % g1 == 0){
                    ok = 0; break;
                }
            }
        }

        if(ok and g1 != 1){
            cout << g1 << endl;
            continue;
        }
        ok = 1;
        for(int i = 1; i <= n; i++){
            if(g2 == 1) break;
            if(i % 2){
                if(v[i] % g2 == 0){
                    ok = 0; break;
                }
            }
            if(i % 2 == 0){
                if(v[i] % g2 != 0){
                    ok = 0; break;
                }
            }
        }

        if(ok and g2 != 1){
            cout << g2 << endl;
        }
        else cout << 0 << endl;
    }
    
    return 0;
}