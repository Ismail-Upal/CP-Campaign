#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
void print_binary(int n){
    for(int i = 9; i >= 0; i--){
        cout << ((n >> i) & 1) << " ";
    }
    cout << endl;
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }     
        ll ans = 0;
        
        ll k = 2;
        while(1){
            set<ll> se;
            for(ll i : v){
                se.insert(i % k);
            }
            if(se.size() == 2){
                ans = k; break;
            }
            k += k;
        }
        
        cout << ans << endl;
    }
    return 0;
}