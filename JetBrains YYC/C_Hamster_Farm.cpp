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
    
    ll n, k; cin >> n >> k;
    vector<ll> v(k);
    for(int i = 0; i < k; i++) cin >> v[i];

    ll mx = 0, cnt = 0, typ = 0, num = 0;
    for(int i = 0; i < k; i++){
        if(n % v[i] == 0 and typ == -1){
            typ = i;
            num = n / v[i];
            cout << typ << " " << num; 
            return 0;
        }
        else{
            if((n / v[i]) * v[i] >= mx){
                mx = (n / v[i]) * v[i];
                typ = i;
                num = mx;
            }
        }
    }
    cout << typ + 1 << " " << num / v[typ];
    
    return 0;
}