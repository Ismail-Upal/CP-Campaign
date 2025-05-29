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
        ll n; cin >> n;
        ll mn_k = 2, mn_node = 1;
        for(ll i = 1; i <= 2; i++){
            mn_node += pow(mn_k, i);
            if(mn_node > 1e9){
                cout << i << " ";
                break;
            }
        }

        ll mx_k = 1e3, mx_node = 1;
        for(ll i = 1; i <= 2; i++){
            mx_node += pow(mx_k, i);
            // if(mn_node > 1e9){
            //     cout << i << " ";
            //     break;
            // }
        }

        cout << mn_node << " " << mx_node << endl;
    }
    
    return 0;
}