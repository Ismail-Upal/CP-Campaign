#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
void print_binary(int n){
    for(int i = 5; i >= 0; i--){
        cout << ((n >> i) & 1) << " ";
    }
    cout << endl;
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n), on(30, 0);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            for(int k = 0; k < 30; k++){
                if(v[i] & (1LL << k)){
                    on[k]++;
                }
            }
        }

        ll mx = 0;

        for(int i = 0; i < n; i++){
            ll sum = 0;
            for(int k = 0; k < 30; k++){
                if(!(v[i] & (1LL << k))){
                    sum += (1LL << k) * on[k];
                }
                else{
                    sum += (1LL << k) * (n - on[k]);
                }
            }
            mx = max(mx, sum);
        }
        cout << mx << endl;
        
    }
    
    return 0;
}